CXX = g++
CXXFLAGS = -Wall -O2 -std=c++17 -fpic -g
objfiles= parser.o adams.o euler.o

demo: demo.o $(objfiles)
	$(CXX) -o demo demo.o $(objfiles) -ldl

main.so: $(objfiles)
	$(CXX) -o main.so -shared $(objfiles) -ldl

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

parser.o: parser.hpp 
euler.o: euler.hpp parser.hpp
adams.o: adams.hpp parser.hpp

test:
	./demo

clean:
	rm -rf *.o demo