#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;

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

        if (s.find(" ") < s.length())
            s = s.replace(s.find(" "), 1, "");

        se1->insert(s.insert(0, *sep));
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

int main(int count, char *args[])
{

    if (count > 1)
        for (int i = 1; i < count; i++)
            strings->push_back(args[i]);

    insert();
    output();

    return 0;
}