# include <iostream>
# include <array>

using namespace std ;


array<int,20> 		ints ;
array<string,20> strings ;

void fill_arrays () {
	for ( int i = 0; i < strings.size(); i++) {
		ints.at(i) = i ;
		strings.at(i) = to_string(i) ;
	}

}

void show_ints () {
	for (auto item: ints){
		cout << item << endl ;
	}
}

void show_strings () {
	for (auto item: strings){
		cout << item << endl ;
	}
}

int main (  ) {
	fill_arrays() ;
	show_ints() ;
	show_strings() ;
}


