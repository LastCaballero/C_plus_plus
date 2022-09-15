# include <iostream>
# include <fstream>
# include <string>
# include <unistd.h>

using namespace std ;

string line ;

void do_stdin () {
	if ( ! isatty(fileno(stdin)) ) {
		while ( getline(cin, line ) )
			cout << line << endl ;
	}
}
void do_file ( string file ) {
	ifstream filestream( file ) ;
	while ( getline( filestream, line ) ) 
		cout << line << endl ;
}
int main (int count, char *args[]) {
	do_stdin() ;
	int i = 1 ;
	while ( args[i] ) {
		do_file( args[i] ) ;
		i++ ;
	}
}
