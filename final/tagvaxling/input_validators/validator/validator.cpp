#include "validator.h"

void run() {
	int n = Int(1, 100);
	Endl();

	vector<int> p = SpacedInts(n, 1, n);
	assert(p.size() == set<int>(p.begin(),p.end()).size());
}
