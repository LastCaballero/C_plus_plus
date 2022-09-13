# include <iostream>
# include <bitset>

using namespace std ;

void shift_to_left ( int value ) {

        while ( value != 0b10000000000000000000000000000000 )
        {
                cout << bitset<32>(value) << endl ;
                value = value << 1 ;
        }

}

void shift_to_right ( int value ) {

        while ( value != 0b11111111111111111111111111111111 )
        {
                cout << bitset<32>(value) << endl ;
                value = value >> 1 ;
        }

}


int main () {
        shift_to_left  ( 0b00000000000000000000000000000001 ) ;
        shift_to_right ( 0b10000000000000000000000000000000 ) ;
        return 0 ;
}
