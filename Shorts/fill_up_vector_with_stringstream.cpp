# include <iostream>
# include <vector>
# include <string>
# include <sstream>
using namespace std ;

stringstream str_stream ;
vector<int> *vec = new vector<int>() ;

int main () {
        str_stream << "1 2 3 4 5" ;
        int i ;

        while ( str_stream >> i )
                vec->push_back(i) ;

        for ( int x : *vec )
                cout << x << endl ;
}
