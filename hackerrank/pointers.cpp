# include <iostream>

using namespace std ;

void update(int *a, int *b){
    int sum = *a + *b, diff = *a > *b ?  *a - *b : *b - *a ;
    *a = sum;
    *b = diff ;
} 


int main () {
    int a, b ;
    int *ap , *bp ;
    ap = &a ;
    bp = &b ;
    cin >> a >> b ;
    update(ap,bp);
    cout << a << endl ;
    cout << b << endl;
    return 0 ;
}