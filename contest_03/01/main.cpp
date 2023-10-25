#include <iostream>
#include <set>

using namespace std;

int main () {
	multiset <float> info;
	int m;
	cin >> m;
	for(int i = 0; i < m; i++) {
		float temp;
		cin >> temp;
		info.insert(temp);
	}
	cin >> m;
	for(int i = 0; i < m; i++){
		float temp;
		cin >> temp;
		info.insert(temp);
	}
	for (auto i : info) {
		cout << i << " ";
	}
	cout << " ";

}	