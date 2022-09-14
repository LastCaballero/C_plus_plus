# include <iostream>
# include <bitset>
# include <string>

using namespace std;

int main () {
        string oct_1 =  bitset<8>(200).to_string() ;
        string oct_2 =  bitset<8>(200).to_string() ;
        string oct_3 =  bitset<8>(200).to_string() ;
        string oct_4 =  bitset<8>(200).to_string() ;
  
        cout << bitset<32>( oct_1
                            + oct_2
                            + oct_3
                            + oct_4 ).to_string() << endl ;
}
