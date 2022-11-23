# include <iostream>
# include <vector>
using namespace std ;

vector<vector<int>> *vectors = new vector<vector<int>>()  ;
int num_internal_vectors ;
int queries ;

void create_internal_vectors( int num ) {
    int size ;
    int *number = new int() ;
    for(int i = 0; i < num ; i++) {
        vectors->push_back( *(new vector<int>()) ) ;
        cin >> size ;
        for(int i2 = 0; i2 < size ; i2++){
            cin >> *number  ;
            vectors->at(i).push_back( *number ) ;
        }
    }
}

void execute_queries( int num ) {
    int inner_vector ; 
    int position ;
    for(int i = 0; i < num; i++) {
            cin >> inner_vector ;
            cin >> position ;
            cout << vectors->at(inner_vector)[position] << endl ;
    }
}

int main(){
    cin >> num_internal_vectors ;
    cin >> queries ;
    create_internal_vectors( num_internal_vectors ) ;
    execute_queries( queries ) ;
    return 0 ;
}