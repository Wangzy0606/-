#include <iostream>
using namespace std;

int main() {
	int r, h;
	cout << "r and h:";
	cin >> r >> h;

	float pi = 3.14159265;
	float S = pi * r * r * 2 + 2 * pi * r * h;
	float V = pi * r * r * h;

	cout << "S = " << S << endl;
	cout << "V =" << V << endl;

	return 0;
}
