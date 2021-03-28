CPLUS_INCLUDE_PATH=../../3p/lh3-cgranges
export CPLUS_INCLUDE_PATH

example:example.cpp
	$(CXX) -std=c++14 -g -O3 -Wall -o $@ $^

clean:
	rm -fr *.o a.out *.dSYM example
