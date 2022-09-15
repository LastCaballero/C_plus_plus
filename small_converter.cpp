# include <iostream>
# include <iomanip>
# include <bitset>
# include <ios>
# include <string>
# include <cstdlib>

using namespace std ;
const int l_width = 10 ;
const int r_width = 35 ;



void out_oct(int & number) {
    
    cout.width(l_width) ;
    cout << setiosflags(ios::left) << "oct: " ;
    cout.width(r_width) ;
    cout << setiosflags(ios::right) << std::oct << number << endl ;
    cout << resetiosflags(ios::adjustfield) ;
}

void out_hex(int & number) {
    cout.width(l_width) ;
    cout << setiosflags(ios::left) << "hex: " ;
    cout.width(r_width) ;
    cout << setiosflags(ios::right) << std::hex << number << endl ;
    cout << resetiosflags(ios::adjustfield) ;
}

void out_bit(int & number){
    bitset<32> bits(number);
    cout.width(l_width) ;
    cout << setiosflags(ios::left) << "bits: " ;
    cout.width(r_width) ;
    cout << setiosflags(ios::right) << bits << endl ;
}







int main (int count, char *args[]){
    

    if (count < 2 ) {
        cout << "we need a number..." << endl ;
        return 1 ;
    }
    int number = atoi(args[1]) ;
    out_oct(number) ;
    out_hex(number) ;
    out_bit(number);
    return 0 ;
}