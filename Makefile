all : main.o sorts.o sorts.o
	g++ main.o sorts.o -o all
main.o : main.cpp
	g++ -c main.cpp
sorts.o : sorts.cpp
	g++ -c sorts.cpp -o sorts.o
clean :
	rm -rf *.o a.out

