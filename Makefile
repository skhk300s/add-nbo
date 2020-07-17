#!/bin/bash

some : some.cpp
	g++ -o some some.cpp

run : some number1.bin number2.bin
	./some number1.bin number2.bin 
