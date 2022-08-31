# include <queue>
# include <iostream>
# include <cstdlib>

using namespace std ;

queue <int> seq ;

int main ( int count, char *args[] ) {
	int start 	= atoi(args[1]);
	int end		= atoi(args[2]);
	if ( ! (start < end) ) {
		cout << "first number must be smaller than second number" << endl ;
		return 1 ;
	}

	for ( int i = start; i <= end ; i++ ) {
		seq.push(i);
	}

	while ( !seq.empty() ) {
		cout << seq.front() << endl ;
		seq.pop() ;
	} 
	return 0 ;
}
