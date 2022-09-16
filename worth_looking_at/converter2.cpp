# include <iostream>
# include <iomanip>
# include <vector>
# include <array>
# include <ios>
# include <bitset>

using namespace std ;

void output_hex (int &) ;
void output_oct (int &) ;
void output_bin (int &) ;

bool hex_o = false ;
bool oct_o = false ; 
bool bin_o = false ;
bool hel_o = false ;

const string hex_opt = "-h" ;
const string oct_opt = "-o" ;
const string bin_opt = "-b" ;
const string hel_opt = "--help" ;

vector<int> *real_args = new vector<int>() ; 

void flip_args (int & count , char *args[]) {
   for (int i = 1; i < count; i++) {
        if (args[i] == hex_opt) hex_o = true ;
        else if (args[i] == oct_opt) oct_o = true ;
        else if (args[i] == bin_opt) bin_o = true ;
        else if (args[i] == hel_opt) hel_o = true ;
        else real_args->push_back(atoi(args[i])) ;
   }
    
}

void help () {
    cout << "-h hex-output" << endl ;
    cout << "-o oct-output"  << endl ;
    cout << "-b bin-output" << endl ;
    cout << "--help help-output" << endl ;
}


int main (int count , char *args[]) {
    flip_args(count, args) ;
    if ( hel_o or count == 1 ) {
        help() ;
        return 0 ;
    }
    for (int i: *real_args){
        if(hex_o) output_hex(i);
        if(oct_o) output_oct(i);
        if(bin_o) output_bin(i);
    }
    
    return 0 ;
}


void output_hex (int & number) {
    cout << setbase(ios::hex) << number << endl ;
}

void output_oct (int & number) {
    cout << setbase(ios::oct) << number << endl ;
}

void output_bin (int & number) {
    cout << bitset<8>(number) << endl ;
}