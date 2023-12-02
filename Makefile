all: main run

main: src\main.cpp
	g++ src\main.cpp -o bin\Simpson.exe -I include

run: bin\Simpson.exe
	bin\Simpson.exe