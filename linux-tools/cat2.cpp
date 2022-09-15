# include <iostream>
# include <fstream>
# include <string>
# include <unistd.h>


using namespace std ;

char c ;

void do_stdin () {
	if ( ! isatty(fileno(stdin)) ) {
		while ( cin.get(c) )
			cout << c ;
	}
}
void do_file ( string file ) {
	ifstream filestream( file ) ;
	while ( filestream.get(c) ) 
		cout << c ;
}
int main (int count, char *args[]) {
	do_stdin() ;
	int i = 1 ;
	while ( args[i] ) {
		do_file( args[i] ) ;
		i++ ;
	}
}
