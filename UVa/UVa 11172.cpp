#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for(int i = 0; i < n; i++) {
		int n1, n2;
		cin >> n1 >> n2;

		if(n1 < n2) {
			cout << "<" << endl;
		}
		else if(n1 > n2) {
			cout << ">" << endl;
		}
		else {
			cout << "=" << endl;
		}
	}

	return 0;
}

//The only thing needed here is a for loop to receive the input.
//Then just analize and print the results. No need for arrays or any thing like that.
//A super easy problem.