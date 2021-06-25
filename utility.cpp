#include "myshell.h"
#include <string>
#include <unistd.h>
#include <string.h>
#include <iostream>


using namespace std;

string path_inserted;
string current_dir;

//cd which will change directory
void tutorial()
{
    cout << "|-----------------------------------------------|" << endl;
    cout << "|----------- EASY COMMANDS TUTORIAL ------------|" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "| 1) Type 'cd' in the console to chose a path   |" << endl;
    cout << "| 2) Type 'cls' to clear the console            |" << endl;
    cout << "| 3) Type 'dir' to print a list of directories  |" << endl;
    cout << "| 4) Type 'copy' to copy a file                 |" << endl;
    cout << "| 5) Type 'print' to print a message            |" << endl;
    cout << "| 6) Type 'md' to create a directory            |" << endl;
    cout << "| 7) Type 'rd' to remove a directory            |" << endl;
    cout << "| 8) Type 'quit' to quit the console            |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|------------------- CREDITIS ------------------|" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "| Edoardo Fratantonio ID: M00702510             |" << endl;
    cout << "| Francesco Arrabito  ID: M00696513             |" << endl;
    cout << "| Michael Donnarumma  ID: M00715594             |" << endl;
    cout << "|-----------------------------------------------|" << endl;
}

void cd(std::string path)
{

    chdir(path.c_str());

    if (path.length() == 0)
    {
        cout << "Please insert the directory you would like to go" << endl;
    } 

    printf("Current working dir: %s\n", get_current_dir_name());
}

//clear commandcls()
void cls()
{
    system("clear");
    cout << "Hello" << flush;
    system("clear");
    cout << "Cleared!" << endl;
}

//dir which lists all the directories present
void dir()
{
    char command[50] = "ls -l";
    system(command);
}

//copy command which will take two files and copy one file into another source
void copy(std::string file, std::string destination)
{
    string Output;
    Output = system(("cp -R " + file + " " + destination).c_str());
    if (file.length() == -1)
        cerr << "Error : " << strerror(errno) << endl;
    else
        cout << Output << file << " directory copied and pasted" << endl;
}

//printing will display a messagestd::string copy_file, std::string pathmak
void print(std::string message)
{
    string printed = message;
    if (message == "")
    {
        message = "Didn't catch that!";
    }
    cout << message << endl;
}

//function that will make a folder
void md(std::string name_folder)
{
    string directory;
    string directoryOut;
    directoryOut = system(("mkdir " + name_folder).c_str());
    if (name_folder.length() == -1)
        cerr << "Error : " << strerror(errno) << endl;
    else
        cout << directoryOut << name_folder << " directory created" << endl;
}

//function that will remove the diretory
void rd(std::string name_file)
{
    string remove;
    string removeDir;
    removeDir = system(("rm -rf " + name_file).c_str());
    if (name_file.length() == -1)
        cerr << "Error : " << strerror(errno) << endl;
    else
        cout << removeDir << name_file << " directory removed" << endl;
}

//this will exit the shell
void quit()
{
    exit(1);
}