# include <iostream>
# include <string>
using namespace std ;
int main () {
        bool first( true ) ;
        string line ;
        string connected ;
        while ( getline(cin, line) ){
                connected += ( first == true ? "":"," ) + line ;
                first = false ;
        }
        cout << connected << endl ;
}
