# include <iostream>
# include <string>
# include <experimental/string>

using namespace std ;
using std::experimental::erase_if ;

int main () {
        string one("zero zero zero");
        erase_if( one, [](char c){ return c == ' ' ;  } );
        cout << one << endl ;
}
