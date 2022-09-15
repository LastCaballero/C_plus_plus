#include <iostream>
#include <string>
#include <list>

using namespace std;

class DoubleArg
{
    string one;
    string two;

public:
    DoubleArg(string o, string t) : one(o), two(t) {}
    string get_string() { return one + " " + two; }
};
class SingleArg
{
    string single;

public:
    SingleArg(string str) : single(str) {}
    string get_string() { return single; }
};

list<DoubleArg> doubles;
list<SingleArg> singles;

int parse_args(int, char *args[]);
int show_args();

int main(int count, char *args[])
{

    if (count > 1) {
        parse_args(count, args);
        show_args();
    }

}

int parse_args(int count, char *args[])
{

    for(int i = 1 ; i < count; i++){
        if ( not args[i+1] ) {
            singles.push_back(SingleArg(args[i])) ;
            break ;
        } 
        if ( string(args[i+1])[0] != '-' ) {
            doubles.push_back(DoubleArg(args[i],args[i+1])) ;
            i++ ;
            continue ;  
        }
        if ( string(args[i+1])[0] == '-' ) {
            singles.push_back(SingleArg(args[i])) ;
            continue ;
        }
        
    }
    return 1;
    
}

int show_args()
{
    
    if ( ! singles.empty() )
    {
        cout << "SingleArgs:" << endl;
        for (SingleArg a : singles)
            cout << a.get_string() << endl;
    }

    if ( ! doubles.empty() )
    {
        cout << "DoubleArgs:" << endl;
        for (DoubleArg a : doubles)
            cout << a.get_string() << endl;
    }
    
    return 1;
}
