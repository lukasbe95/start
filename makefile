all:	first.o
first.o:
	g++ first.cpp -o first.o
clean:
	rm first.o
