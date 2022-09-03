# include <iostream>
# include <string>
# include <set>
# include <fstream>
# include <unistd.h>

using namespace std ;


int do_stdin( set<string> *un ) {
	
	string *line = new string();
	
	while ( getline( cin, *line ) )
						un->insert( *line ) ;
	
	return 1 ;
}


int do_file( ifstream *file, set<string> *un ) {
	
	string *line = new string() ;
	
	while ( getline( *file, *line ) )
                		un->insert( *line ) ;
	
	return 1 ;

}

int print_out ( set<string> *un ) {
	for ( string s: *un ) {
		cout << s << endl ;
	}
	return 1 ;
}


int main ( int count , char *args[] ) {
	
	set<string> *uniqs = new set<string>() ;
	
	if ( ! isatty( fileno(stdin) ) )
							do_stdin( uniqs ) ;
	
	for ( int i = 1 ; i < count ; i++ ) {

		ifstream *read = new ifstream(args[i]);
		
		if ( *read ) {
			do_file( read, uniqs ) ;
		} 
		else {
			uniqs->insert(args[i]) ;	
		}

	}

	print_out( uniqs ) ;

}
