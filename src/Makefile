# Flight Computer GUI Makefile 
# Program Name: FlightComputerGUI

# Compiler 
CC = g++
C_FLAGS = -Wall -g

# Library Directory
LIBDIR = ../lib 

# Final Executable
FlightComputerGUI: main.o
	$(CC) $(C_FLAGS) main.o -o FlightComputerGUI

# Main Object Code
main.o: main.cpp
	$(CC) -c $(C_FLAGS) main.cpp 

# Clean Build
clean:
	rm *.o FlightComputerGUI
