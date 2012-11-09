CFLAGS= -I /usr/include/GNUstep -fconstant-string-class=NSConstantString `gnustep-config --objc-flags` -lgnustep-base
CC=gcc
SRC=helloworld.m
OBJ=helloworld

All: 
	$(CC) $(CFLAGS) $(SRC) -o $(OBJ)
