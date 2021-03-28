vpath %.h ../../3p/ekg-intervaltree
CPLUS_INCLUDE_PATH=../../3p/ekg-intervaltree
export CPLUS_INCLUDE_PATH

CXXFLAGS +=	-Wall
BIN =	interval_tree_test

all: ${BIN}
${BIN}: interval_tree_test.cpp IntervalTree.h
	${CXX} ${CPPFLAGS} ${CXXFLAGS} ${LDFLAGS} interval_tree_test.cpp -std=c++0x -o ${BIN}
clean:
	rm -rf ${BIN} ${DESTDIR}

.PHONY: clean
