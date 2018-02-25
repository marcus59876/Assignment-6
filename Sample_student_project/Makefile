all: build archive 

build: exec

exec: main.o game.o othello.o 
	g++ main.o game.o othello.o -o exec

main.o: main.cc
	g++ -c main.cc

game.o: game.cc 
	g++ -c game.cc

othello.o: othello.cc othello.h colors.h piece.h
	g++ -c othello.cc

clean: 
	rm -rf *o exec archive1.tar

archive:
	tar -cvf archive1.tar ../
