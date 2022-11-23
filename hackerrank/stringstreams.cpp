#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

vector<int> parseInts(string str) {
    int num ;
    char c ;
    vector<int> back ;
    stringstream string_stream(str) ;
    do {
        string_stream >> num ;
        back.push_back( num ) ;
    } while( string_stream >> c ) ;
    return back ;
}



int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }
    return 0;
}