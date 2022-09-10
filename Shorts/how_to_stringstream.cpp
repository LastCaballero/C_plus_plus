# include <iostream>
# include <vector>
# include <string>
# include <sstream>

using namespace std ;

stringstream ss ;

int main () {
        ss << "1 2 3 4 5" ;
        int i ;
        while ( ss >> i )
                cout << i << endl ;
}
