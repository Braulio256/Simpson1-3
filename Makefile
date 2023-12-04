bin/Simpson: src/main.cpp src/tinyexpr.c
	g++ src/main.cpp -c  -o temp/main.o -I include
	gcc src/tinyexpr.c -c -o temp/tinyexpr.o -I include
	g++ temp/main.o temp/tinyexpr.o -o bin/Simpson

run: bin/Simpson
	./bin/Simpson
