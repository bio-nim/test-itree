CPLUS_INCLUDE_PATH=../../3p/lh3-cgranges
export CPLUS_INCLUDE_PATH

example:example.cpp
	$(CXX) -g -O3 -Wall -o $@ $^

clean:
	rm -fr *.o a.out *.dSYM example
