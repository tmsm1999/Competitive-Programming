#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int array[n];
	for(int i = 0; i < n; i++) {
		cin >> array[i];
	}

	for(int i = 1; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(array[i] < array[j]) {
				int insert = array[i];
				for(int k = i; k >= j; k--) {
					array[k] = array[k-1];
				}
				array[j] = insert;
				break;
			}
		}
	}

	for(int i = 0; i < n; i++) {
		cout << array[i] << " ";
	}

	cout << endl;
	return 0;
}