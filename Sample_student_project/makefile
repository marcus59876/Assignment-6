all: build archive

build: a.out	

a.out: game.o main.o othello.o
	g++ game.o main.o othello.o -o a.out

game.o: game.cc
	g++ -c game.cc
 
main.o: main.cc
	g++ -c main.cc

othello.o: othello.cc othello.h piece.h colors.h
	g++ -c othello.cc

clean: 
	rm -rf *o a.out archive1.tar 

archive: 
	tar -cvf archive1.tar ../
