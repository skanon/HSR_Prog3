#include <iostream>

int sumi(std::istream &in) {
	int sum {0};
	int tmp {0};
	while(in >> tmp) {
		sum += tmp;
	}
	return sum;
}

