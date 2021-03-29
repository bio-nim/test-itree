vpath %.h ../../3p/ekg-intervaltree
CPLUS_INCLUDE_PATH=../../3p/ekg-intervaltree
export CPLUS_INCLUDE_PATH

CXXFLAGS +=	-Wall -std=c++14
BIN =	interval_tree_test.exe

test:
	${CXX} ${CPPFLAGS} ${CXXFLAGS} ${LDFLAGS} example.cpp -o example.exe
	./example.exe
all: ${BIN}
${BIN}: interval_tree_test.cpp IntervalTree.h
	${CXX} ${CPPFLAGS} ${CXXFLAGS} ${LDFLAGS} interval_tree_test.cpp -o ${BIN}
clean:
	rm -rf *.exe

.PHONY: clean
