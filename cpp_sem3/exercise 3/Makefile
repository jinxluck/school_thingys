# -*- Makefile -*-

# makro's #
########################################################
#final program name:
FPN = e5
#dependency file/files:
DF = main.cpp Options.cpp
#compiler:
COMP = g++

# magic #
#######################################################
all:$(FPN) 

$(FPN):$(DF)
	$(COMP) $(DF) -o $(FPN)

# phony's #
######################################################
clean:
	rm -f *.o $(FPN)