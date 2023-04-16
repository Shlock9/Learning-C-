#include <iostream>

// this apparently doesn't like being imported
int numbers() {
	int  integer = 560;
	float num = (float) integer;

	std::cout << num << "\n";

	return 0;
}