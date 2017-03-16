main: main.o sample.o
	g++ main.o sample.o -o main 

main.o: main.cpp
	g++ -c main.cpp -o main.o

sample.o: sample.cpp
	g++ -c sample.cpp -o sample.o

clean:
	rm -f *.o main
