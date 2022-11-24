# include <iostream>
# include <sys/socket.h>
# include <netinet/in.h>
# include <arpa/inet.h>
# include <string.h>
# include <stdlib.h>

using namespace std ;

string host ;
int port ;
int home_socket = -1 ;
struct sockaddr_in server ;

bool create_home_socket () {
    home_socket = socket( AF_INET, SOCK_STREAM, 0 ) ;
    if( home_socket > -1 )
        return true;
    else
        return false ;
}

int check_server_address () {
    server.sin_family = AF_INET ;
    server.sin_port = htons(port) ;
    int back = inet_pton( AF_INET, host.c_str() , & server.sin_addr ) ;
    if( back == 1 )
        return true ;
    else
        return false ;
}

bool try_to_connect() {
    int result = connect(home_socket, (struct sockaddr *)&server, port) ;
    if( result == 0 )
        return true ;
    else
        return false ;
}


int main (int count, const char **args) {
    host = string(args[1]) ;
    if (host == "localhost") {
        host = "127.0.0.1" ;
    }
    port = int( atoi(args[2]) ) ;
    
    if ( create_home_socket() && check_server_address() && try_to_connect() ) {
        cout << "we are connected :-)" << endl ;
        string message("hallo\n") ;
        send(home_socket, message.c_str(), message.length(), MSG_DONTWAIT ) ;
        return 1 ;
    } else {
        cout << "something went wrong!" << endl ;
        return -1 ;
    }
    return 0 ;
}