CPLUS_INCLUDE_PATH=../../3p/lh3-cgranges
export CPLUS_INCLUDE_PATH
ASAN= -fsanitize=address -fno-omit-frame-pointer
UBSAN= -fsanitize=undefined -fsanitize=implicit-conversion -fsanitize=integer -fsanitize=float-divide-by-zero -fsanitize=nullability
CXXFLAGS+= -g -O3 -Wall
CXXFLAGS+= -std=c++14
CXXFLAGS+= ${ASAN} ${UBSAN}

ex:
	rm -f ./example
	${MAKE} example
	./example

example: example.cpp
	${CXX} ${CXXFLAGS} -o $@ $^

clean:
	rm -fr *.o a.out *.dSYM example
