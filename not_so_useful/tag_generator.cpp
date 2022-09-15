#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <vector>
#include <unistd.h>

using namespace std;

bool middle = false ;

vector<string> *strings = new vector<string>{
    "Programmierer",
    "C",
    "C++",
    "Perl",
    "Bash",
    "Z Shell",
    "HTML",
    "CSS",
    "Javascript",
    "Windows Powershell",
    "Gawk",
    "Sed"};

set<string> *se1 = new set<string>();

string *sep = new string("#");

int insert()
{
    for (string s : *strings)
    {

        while (s.find(" ") < s.size())
            s = s.replace(s.find(" "), 1, "");
        if ( ! middle)
            se1->insert(s.insert(0, *sep));
        else
            se1->insert(s.append(",")) ; 
        
    }
    return 1;
}

int output()
{

    for (string s : *se1)
        cout << s << " ";

    cout << endl;

    return 1;
}

int do_pipe()
{
    string *line = new string();
    while (getline(cin, *line))
        strings->push_back(*line);
    return 1;
}

int do_file(ifstream *file)
{
    string *line = new string();
    while (getline(*file, *line))
        strings->push_back(*line);
    return 1;
}

int main(int count, char *args[])
{



    if (!isatty(fileno(stdin)))
        do_pipe();

    if (count > 1)
    {
        for (int i = 1; i < count; i++)
        {  
            if ( string(args[i]) == "-m") { 
                middle = true ; 
                continue ; 
            }

            ifstream *file = new ifstream(args[i]);
            if (*file)
                do_file(file);
            else
                strings->push_back(args[i]);
        }
    }

    insert();
    output();

    return 0;
}


