#include <iostream>
#include <cstdio>
using namespace std;

int main() {

	int n1, n2 = 0;
	cin >> n1 >> n2;

	int arrayOne[n1];
	for(int i = 0; i < n1; i++) {
		cin >> arrayOne[i];
	}

	int arrayTwo[n2];
	for(int i = 0; i < n2; i++) {
		cin >> arrayTwo[i];
	}

	int answer = 0;

	for(int i = 1; i <= 100; i++) {
		int beingConsidered = i;

		bool conditionOne = true;
		for(int j = 0; j < n1; j++) {
			if(i % arrayOne[j] != 0) {
				conditionOne = false;
				break;
			}
		}

		bool conditionTwo = true;
		for(int j = 0; j < n2; j++) {
			if(arrayTwo[j] % i != 0) {
				conditionTwo = false;
				break;
			}
		}

		if(conditionOne && conditionTwo) {
			answer++;
		}
	}

	cout << answer << endl;

	return 0;

}