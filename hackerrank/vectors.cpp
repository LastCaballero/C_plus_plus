# include <iostream>
# include <vector>
# include <string>
# include <sstream>


using namespace std ;

stringstream string_str ;

int main () {

	int n, q;
	cin >> n >> q ;
	vector<vector<int>> vecs(n) ;
	
	char c ; cin.get(c);
	
	string line ;	
	int placeholder ;
	for ( int i = 0 ; i < n ; i++){
		getline(cin, line) ;
		string_str << line ;
		while ( string_str >> placeholder )
			vecs.at(i).push_back(placeholder);
	}
	

	vector<int> results ;
	int vecnr, vecidx ;
	for ( int i = 0 ; i < vecs.size()  ; i++){
		cin >> vecnr >> vecidx ;
		results.push_back(vecs.at(vecnr).at(vecidx)) ;
	}

	for (int r: results)
		cout << r << endl;
	
	return 0 ;
}
