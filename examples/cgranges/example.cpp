#include <cstdio>
#include <iostream>
#include "IITree.h"
using namespace std;

using IntTree = IITree<int, int>;

void Dump(IntTree const& it)
{
    for (size_t j = 0; j < it.size(); ++j) {
        printf("\t%zu\t%d\t%d\t%d\n",
                j, it.start(j), it.end(j), it.data(j));
    }
}
int main(void)
{
    int n = 0;
	IITree<int, int> tree;
	tree.add(12, 34, n++);
	tree.add(0, 23, n++);
	tree.add(34, 56, n++);
	tree.add(21, 22, n++);
	tree.add(22, 22, n++);
	tree.add(22, 23, n++);
	//tree.add(25, 25, n++);
	//tree.add(25, 26, n++);
	tree.index();
    cout << "All:\n";
    Dump(tree);
    int left = 22;
    int right = 23;
    cout << "overlap(" << left << ", " << right << ")\n";
	std::vector<size_t> a;
	tree.overlap(left, right, a);
	for (size_t i = 0; i < a.size(); ++i)
		printf("%d\t%d\t%d\n", tree.start(a[i]), tree.end(a[i]), tree.data(a[i]));
	return 0;
}
