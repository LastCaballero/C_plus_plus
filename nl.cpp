# include <iostream>
# include <fstream>
# include <string>
# include <queue>
# include <cstdio>
# include <unistd.h>

using namespace std;

string line ;

void output ( queue<string> *q ) {
		int width = to_string(q->size()).length() ;
        string format("%" + to_string(width) + "d %s\n");
        for ( int i = 0 ; i <= q->size() ; i++ ) {
                printf( format.c_str() , i, q->front().c_str() );
                q->pop() ;
        }
}

void do_stdin() {
	queue <string> *lines = new queue<string>();
	while ( getline( cin, line ) ) 
		lines->push(line);
	output ( lines ) ;

}
void do_file ( ifstream *file ) {
	queue <string> *lines = new queue<string>() ;
	while ( getline ( *file, line ) ) 
		lines->push( line ) ;
	output ( lines ) ;
}

int main (int count, char *args[]) {
	if ( ! isatty(fileno(stdin)) ) 
		do_stdin() ;
	int *i = new int(1);
	if ( count > 1 ) {
		for( int i = 1 ; i < count ; i++ ) {
			ifstream *pfile = new ifstream(args[i]) ;
			if ( *pfile ) {
				do_file( pfile ) ;	
			}	
		}
	}	
	return 0 ;
}
	

