# include <iostream>
# include <cstdio>

using namespace std ;

int main () {
    int size ; cin >> size ;
    int ar[size] ;
    
    for ( int i = 0 ; i < size; i++)
        cin >> ar[i] ;
    for ( int i = size-1 ; i >= 0; i--)
        cout << ar[i] << " " ;
    cout << endl ;
    
}