# include <iostream>

using namespace std ;

int main () {
    string a ;
    string b ;
    cin >> a ;
    cin >> b ;
    cout << a.size() << " " << b.size() << endl ;
    cout << a + b << endl ;
    char sp = a[0] ;
    a[0] = b[0] ;
    b[0] = sp ;
    cout << a << " " << b << endl ;
}