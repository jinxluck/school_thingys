/*
 * main.c
 *
 *  Created on: 12 May 2020
 *      Author: jinxluck
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <net/if.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <linux/can.h>
#include <linux/can/raw.h>

int main(void)
{
	//variables and structs
	int s, nbytes;
	struct sockaddr_can addr;
	struct can_frame frame;
	struct ifreq ifr;
	const char *ifname = "can0";

	//socket init
	if((s = socket(PF_CAN, SOCK_RAW, CAN_RAW)) < 0)
	{
		perror("Error while opening socket");
		return -1;
	}

	//network setup
	strcpy(ifr.ifr_name, ifname);
	ioctl(s, SIOCGIFINDEX, &ifr);
	addr.can_family = AF_CAN;
	addr.can_ifindex = ifr.ifr_ifindex;
	printf("%s at index %d\n", ifname, ifr.ifr_ifindex);

	//socket binding
	if(bind(s, (struct sockaddr *)&addr, sizeof(addr)) < 0)
	{
		perror("Error in socket bind");
		return -2;
	}

	//CAN message controle
	frame.can_id = 123; //can0 123#11.22.33
	frame.can_dlc = 3;
	frame.data[0] = 11;
	frame.data[1] = 22;
	frame.data[2] = 33;

	//write CAN message
	nbytes = write(s, &frame, sizeof(struct can_frame));

	//return message
	printf("Wrote %d bytes \n", nbytes);

	return 0;
}
