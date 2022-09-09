# include <iostream>
# include <array>
using namespace std ;

int max_of_four(int a, int b, int c, int d) {
    int max = 0 ;
    array<int,4> ar = {a,b,c,d} ;
    for ( int x: ar){
        x > max ? max = x : max = max ;
    }
    return max ;
}


int main () {
    int a,b,c,d ;
    cin >> a >> b >> c >> d ;
    cout << max_of_four(a,b,c,d) << endl ;
}
