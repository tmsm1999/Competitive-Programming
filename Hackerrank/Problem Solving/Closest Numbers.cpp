#include <iostream>
#include <vector>
#include <iterator>
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
	for(int i = i; i < n; i++) {
		int diff = abs(array[i] - array[i+1]);

		if(diff < minDiff) {
			minDiff = diff;
		}
	}

	vector<int> pairs;
	for(int i = 0; i < n; i++) {
		if((abs(array[i] - array[i+1])) == minDiff) {
			pairs.push_back(array[i]);
			pairs.push_back(array[i+1]);
		}
	}

	for(vector<int>::iterator it = pairs.begin(); it != pairs.end(); it++) {
		cout << *it << " ";
	}

	cout << endl;
	return 0;

}