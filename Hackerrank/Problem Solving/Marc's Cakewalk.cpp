#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool compareMin (int a, int b) {
	return a > b;
}

int main() {
	int n;
	cin >> n;

	long array[n];

	for(int i = 0; i < n; i++) {
		cin >> array[i];
	}

	sort(array, array + n, compareMin);

	long  min = 0;
	for(int i = 0; i < n; i++) {
		//cout << array[i] << endl;
		min = min + (pow(2, i) * array[i]);
	}

	cout << min << endl;
	return 0;
}