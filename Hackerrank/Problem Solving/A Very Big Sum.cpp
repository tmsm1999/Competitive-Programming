#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n;
	cin >> n;

	long sum = 0;
	for(int i = 0; i < n; i++) {
		long nextNumber = 0;
		cin >> nextNumber;

		sum = sum + nextNumber;
	}

	cout << sum << endl;
	return 0;
}