# include <iostream>
# include <iomanip>

using namespace std ;

int main() {
	// example for setw
	for ( int i = 1 ; i <= 100 ; i++ )
		cout << setw(3) << i << endl ;
	
	//example for setfill and setw
	for ( int i = 1 ; i <= 100 ; i++ ) 
		cout << setfill('0') << setw(3) << i << endl ;
	

	return 0 ;

}
