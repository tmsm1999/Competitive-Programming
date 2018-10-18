#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	int answer = 0;

	int array[n];
	for(int i = 0; i < n; i++) {
		cin >> array[i];
	}
	sort(array, array + n);

	int x = 0;
	int first = x;
	int second = x+1;

	while(second < n) {
		if(array[second] - array[first] == k) {
			answer++;
			first++;
			second++;
		}
		else if(array[second] - array[first] < k) {
			second++;
		}
		else {
			first++;
		}
	}

	cout << answer << endl;
	return 0;
}