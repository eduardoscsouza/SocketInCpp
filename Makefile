#Author: Eduardo Santos Carlos de Souza



all:
	g++ -c -std=c++11 -O3 socketstream.cpp -o socketstream.o
	g++ -std=c++11 -O3 socketstream.o server_example.cpp -o server_example.out
	g++ -std=c++11 -O3 socketstream.o client_example.cpp -o client_example.out

clean:
	rm -f *.o *.out

run:
	./server_example.out & sleep 1s; ./client_example.out