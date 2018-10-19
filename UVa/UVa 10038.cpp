#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {

	int n;
	while(cin >> n) {
		int array[n-1];
		bool jolly = true;

		if(n == 1) {
			int a; cin >> a;
			cout << "Jolly" << endl;
		}
		else {
			int prev, next; cin >> prev;

			for(int i = 0; i < n - 1; i++) {
				cin >> next;
				array[i] = abs(prev-next);
				prev = next;
			}

			sort(array, array + n-1);

			int i = 0;
			while(array[i] == i+1 && i < n-1) {
				i++;
			}

			if(i == n-1) {
				cout << "Jolly" << endl;
			}
			else {
				cout << "Not jolly" << endl;
			}
		}
	}
	return 0;
}