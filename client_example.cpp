#include "socketstream.hpp"



int main(int argc, char * argv[])
{
	//Open client and connect to server
	Client c = Client();
	c.connect_to_server("127.0.0.1", 8000);

	//Create message
	char msg[] = "Hello World!";
	size_t msg_size = sizeof(msg);

	//Send message size
	c.send(&msg_size, sizeof(size_t));

	//Send message
	c.send(msg, msg_size);

	//Close server
	c.close_client();	

	return 0;
}