#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	if (n % 2) {cout << -1; return 0;}
	for (;n > 0; n--) cout << n << ' ';
	return 0;
}
