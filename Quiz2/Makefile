all:clean doc build doczip

build:
	g++ *.cc -o myexe
clean:
	rm -r -f *.o doczip config.bak config myexe doc

myexe: build

doc: 
	doxygen -g config
	mkdir documentation 
	cp config documentation
	cd documentation
	doxygen config

doczip:
	doxygen -g config 
	mkdir documentation 
	cp config documentation
	cd documentation
	doxygen config
	cd .. 
	zip doczip documentation

archive:
	mkdir Othello_Source
	cp *.* makefile Othello_Source
	tar -zcvf Othello_Archive.tar.gz Othello_Source
	rm -r Othello_Source
	
run: build
	./myexe	
