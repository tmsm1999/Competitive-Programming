#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int n;
	cin >> n;

	int array[n];
	for(int i = 0; i < n; i++) {
		cin >> array[i];
	}

	sort(array, array + n);

	int minDiff = abs(array[0] - array[1]);
	for(int i = 1; i < n; i++) {
		int diff = abs(array[i] - array[i - 1]);
		if(diff < minDiff) {
			minDiff = diff;
		}
	}

	cout << minDiff << endl;

	return 0;
}