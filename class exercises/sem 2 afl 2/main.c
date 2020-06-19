
///////////////////////////////////////////////////////////////////////////////
//File name:  main.c
//version:
//Created on: 9 Mar 2019
//Author:     Jan k. schiermer
//Description: A bcd converter reading  from a file, where the end file name
//             choose which convertion should be made etc. .bin means translate
//             to .bcd
///////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <string.h>

#define MAX 75

int bcd_bin_check(char argv[], int  c); //checks the filename
void bin_to_bcd(int bin); //converts binary to bcd
void bcd_to_bin(int bcd);//converts bcd to binary


int main(int argc,char * argv[])
{
FILE *ptr;

int c = 0; //return value from  bcd_bin_check
int value_holder = 0;//holds the value from the file read
char string[MAX];//puts the integer value into an array

strcpy(string,argv[1]);//copy's the value to a string

c = bcd_bin_check(string,strlen(argv[1]));//checks file end name

if(c == 1)//if bin file
{
	ptr = fopen(argv[1],"rb");//opens the bin file and assign pointer
	while(fread(&value_holder,sizeof(int),1,ptr));//reads the value of the file
	bin_to_bcd(value_holder);//converts the file to bcd
	printf("Your file has been created as result.bcd\n\n");//end message
}

if(c == 2)//if bcd file
{
	ptr = fopen(argv[1],"rb");//opens the bcd file and assign pointer
	while(fread(&value_holder,sizeof(int),1,ptr));//reads the value of the file
	bcd_to_bin(value_holder);//converts the file to bcd
	printf("Your file has been created as result.bin\n\n");//end message
}

if(c == 0)//if it's not a bin or bcd file
{
	printf("Something went wrong, program closes...\n\n");//fail message
}

return 0;
}

int bcd_bin_check(char argv[], int  c)//file end name checker
{

	//check for bin file and return 1 if it is
if(argv[c-3] == 'b')
{
	if(argv[c-2] == 'i')
	{
		if(argv[c-1] == 'n')
		{
			return 1;
		}
	}
}

	//check for bcd file and return 2 if it is
if(argv[c-3] == 'b')
{
	if(argv[c-2] == 'c')
	{
		if(argv[c-1] == 'd')
		{
			return 2;
		}
	}
}

return 0;//if it's not a bin or bcd return 0
}

void  bin_to_bcd (int bin)//convert binary to bcd
{
	FILE *fp_bcd;
	char con_ch[MAX];//integer value array
	sprintf(con_ch,"%d",bin);//convert integer to an array
	int i = strlen(con_ch);//lenght of the new array
	int x = 0;//used for the loop
	int holder = 0;//used for the bcd value

	fp_bcd=fopen("result.bcd","wb");//creates or opens a bcd file

	while(x != i)
	{
		holder=(holder<<4)+con_ch[x]-'0';//converter
		//the -'0' is to get the int value of the number of the
		//place in the array, otherwise it comes as ascii

		x++;//incrementer
	}


	printf("Binary:%d\nBCD:%d\n",bin,holder);//informs about the values

	fwrite(&holder,sizeof(int),1,fp_bcd);//writes the value to the new bcd file

    fclose(fp_bcd);//remember to close file...

}

void bcd_to_bin(int bcd)//convert bcd to binary
{
	FILE *fp;
	char con_ch[MAX];//integer value array
	sprintf(con_ch,"%d",bcd);//convert integer to an array
	int i = strlen(con_ch);//lenght of the new array
	int x = 2;//used for the while loop
	int y = 1;//used for the while loop
	int holder_1 = 0;//used to save/make the binary value
	int holder_2 = 0;//used for conversion and masking
	int holder_3 = 0;//used for conversion and masking


	holder_1 = bcd>>(4*(i-1));//first value of the BCD

	while(x<=i)
	{
		holder_3 = bcd >> 4*(i-y);//mask
		holder_2 = (holder_3<<4) ^ (bcd>>4*(i-x));//mask and value

		//ex. of the workings: xxxx = the bcd value bits, 0000 = shifted value
		//first run: i = 3
		//         used or shifted <<   .   unused or shifted >>
		//holder_3 = xxxx 0000
		//bcd mask = xxxx xxxx			. 		  xxxx
		//holder_2 = xxxx xxxx


		holder_1=(holder_1*10)+holder_2;//adder to binary value

		x++;
		y++;
	}

	printf("BCD:%d\nBinary:%d\n",bcd,holder_1);//informs about the values

  fp=fopen("result.bin","wb");//creates or opens a binary file
  fwrite(&holder_1,sizeof(int),1,fp);//writes the value to the new bin file
  fclose(fp);//remember to close...
}
