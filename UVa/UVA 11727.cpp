#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, salaryOne, salaryTwo, salaryThree = 0;

	cin >> n;
	int array[3];
	for(int i = 0; i < n; i++) {
		cin >> array[0] >> array[1] >> array[2];
		sort(array, array + 3);

		cout << "Case " << i + 1 << ": " << array[1] << endl;; 
	}
	return 0;
}

//In this problem we have to output the salary of the person that is in the middle. Not the one who
//makes a tone of money neither the one who makes little money. The easiest procedure is to sort the
//array and then print position 1 of the array with 3 positions.
