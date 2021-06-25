#include "myshell.h"
#include <string>
#include <iostream>
using namespace std;

void cases(string key, string value)
{
    if (key == "?")
    {
        tutorial();
    }
    else if (key == "cd")
    {
        cd(value);
    }
    else if (key == "cls")
    {
        cls();
    }
    else if (key == "dir")
    {
        dir();
    }
    else if (key == "copy")
    {   
        //file name
        string delimiter = " ";
        string fileName = value.substr(0, value.find(delimiter));
        //path
        string path = value.substr(value.find_first_of(" \t") + 1);
        copy(fileName, path); 
    }
    else if (key == "print") 
    {
        print(value);
    }
    else if (key == "md")
    {
        md(value);
    }
    else if (key == "rd")
    {
        rd(value);
    }
    else if (key == "quit")
    {
        quit();
    }
}

int main(){

    cout << "\r\nType '?' for a list of commands" << endl;
    cout << "Insert the command: ";
    string word;
    getline (std::cin, word);

    //Count the number of words on string
    size_t NWords = word.empty() || word.back() == ' ' ? 0 : 1;
    for (size_t s = word.size(); s > 0; --s){
        if (word[s] == ' ' && word[s-1] != ' ') ++NWords;
    }

    //splitting the string into 2 values, key and values (word1, word2)
    //key
    string delimiter = " ";
    string word1 = word.substr(0, word.find(delimiter));
    //value
    string word2 = word.substr(word.find_first_of(" \t") + 1);
    
    if (NWords <=1){
        word2 = "";
    }

    //basing on the input, run the relevant function
    cases(word1, word2);

    //this "main" call determines a ricursive infinite loop
    main();
    return 0;
}