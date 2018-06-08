#include <iostream>
#include "socketstream.hpp"

using namespace std;



int main(int argc, char * argv[])
{
	//Open server, bind to port and connect to clients
	Server s = Server();
	s.bind_to_port("127.0.0.1", 8000);
	s.accept_clients(1);

	//Get message size from peer 0
	size_t msg_size;
	s.receive(0, &msg_size, sizeof(size_t));

	//Get message from peer 0
	char msg[msg_size];
	s.receive(0, msg, msg_size);

	//Print message
	cout<<msg<<endl; 

	//Close server
	s.close_server();
	return 0;
}