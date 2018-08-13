@echo off
g++ -c src/test.cpp -o obj/test.o
g++ obj/test.o -o bin/test
@pause