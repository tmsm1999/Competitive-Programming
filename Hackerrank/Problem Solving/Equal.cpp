#include <iostream>
#include <algorithm>
using namespace std;

int operations(int array[], int c, int op) {
	sort(array, array + c);

	bool allEqual = true;
	for(int i = 0; i < c - 1; i++) {
		if(array[i] != array[c-1]) {
			allEqual = false;
		}

		if(array[c - 1] % array[i] != 1 && array[c - 1] % array[i] != 2 && array[c - 1] % array[i] != 5) {
			for(int j = 0; j < c; j++) {
				if(j != i) {
					array[j] += 1;
				}
			}
			return operations(array, c, op + 1);
		}
	}

	if(allEqual) {
		return op;
	}
	else {
		
	}

	

	//return 0;

	
}

int main() {

	int n;
	cin >> n;

	for(int i = 0; i < n; i++) {

		int c = 0;
		cin >> c;
		 //numero de colegas
		int array[c];
		for(int j = 0; j < c; j++) {
			cin >> array[j];
		}

		cout << operations(array, c, 0) << endl;
	}

	return 0;
}