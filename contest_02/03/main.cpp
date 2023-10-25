#include <iostream>

bool compare(const std::string& x, const std::string& y) {
	int countX = std::count(x.begin(), x.end(), '1');
	int countY = std::count(y.begin(), y.end(), '1');
	if (countX == countY) {
		return stoi(x) < stoi(y);
	}
	else {
		return countX > countY;
	}
}