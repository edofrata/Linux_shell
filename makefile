
# Francesco Arrabito,  M00696513 - Operating Systems CW01 # CompLab1/01 tutor: Ahmed Eissa myshell:
# Edoardo Fratantonio, M00702510 - Operating Systems CW01 # CompLab1/01 tutor: Ahmed Eissa myshell: 
# Michael Donnarumma, Student Number - Operating Systems CW01 # CompLab1/01 tutor: Ahmed Eissa myshell:
#creating the g++ variable containing the compiler instruction
CC = g++
#creating the -c -Wall variable containing compilation parameters
CFLAGS = -c -Wall

#compiling the two files to get the final one which would be myshell.cpp and utility.cpp
myshell: myshell.o utility.o
	$(CC) myshell.o utility.o -o myShell

#compiling just the myshell.cpp file even though myshell,h is not compulsory, it is just fr precaution
myshell.o: myshell.cpp myshell.h
	$(CC) $(CFLAGS) myshell.cpp

#compiling just the utility.cpp file
utility.o: utility.cpp myshell.h
	$(CC) $(CFLAGS) utility.cpp

#clearing all copild files
clear:
	rm *.o myshell