# include <iostream>
# include <vector>
# include <string>
# include <sstream>
using namespace std ;

stringstream str_stream ;

int main () {
        str_stream << "1 2 3 4 5" ;
        int i ;
        while ( str_stream >> i )
                cout << i << endl ;
}
