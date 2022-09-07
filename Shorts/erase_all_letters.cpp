# include <iostream>
# include <string>
# include <experimental/string>
using namespace std ;
int main () {
        string one("zero zero zero");
        experimental::fundamentals_v2::erase_if(one, [](char c){ return c == ' ' ;  } );
        cout << one << endl ;
}
