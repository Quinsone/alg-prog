#include <iostream>

using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    if (b != 0) {
        double result = a / b;
        cout<< result << endl;
    }
    else {
        cout << endl;
    }

    return 0;
}
