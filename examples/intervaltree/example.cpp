#include "IntervalTree.h"
#include <iostream>

using namespace std;
using namespace interval_tree;

typedef IntervalTree<std::size_t, int> intervalTree;
typedef intervalTree::interval interval;
typedef intervalTree::interval_vector intervalVector;

int main(void)
{
    int n = 100;
    IntervalTree<std::size_t, int> t{
        {
            {1,3, n++},
            {1,3, n++},
            {0, 10, n++},
            {8, 10, n++},
            /*
            {12, 35, n++},
            {0, 24, n++},
            {34, 57, n++},
            {21, 23, n++},
            {22, 23, n++},
            {22, 24, n++},
            */
        },
    4, 64, 512};
    cout << "All:\n";
    cout << t;
    cout << "?END.\n";
	auto v = t.findOverlapping(1,1);
    cout << "Found:\n";
    for (auto x : v) {
        cout << x << "\n";
    }
    return 0;
}
