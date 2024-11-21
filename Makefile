CC=g++
CFLAGS = -Wall -g -o

test:
	$(CC) $(CFLAGS) test test.cpp

vel:
	$(CC) $(CFLAGS) velCalc velCalc.cpp
