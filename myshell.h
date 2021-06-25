#ifndef myshell.h
#define myshell.h

#include <iostream>
#include <string>
//declaring all the classes that we are going to use

//tutorial 
void tutorial();
//cd which will change directory
void cd(std::string path);

//clear command
void cls();

//dir which lists all the directories present
void dir();

//copy command which will take two files and copy one file into another source
void copy(std::string copy_file, std::string path);

//printing will display a message
void print(std::string message);

//function that will make a folder 
void md(std::string name_folder);

//function that will remove the diretory
void rd(std::string name_file);

//this will exit the shell
void quit();


#endif