#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n = 0; //numero de estudante
	cin >> n;

	for(int i = 0; i < n; i++) {
		int grade = 0;
		cin >> grade;

		if(grade < 38 || grade % 10 == 5 || grade % 10 == 0) {
			cout << grade << endl;
		}
		else {
			int remainder = grade % 10;
			if(remainder < 5 && 5 - remainder < 3) {
				cout << grade + (5 - remainder) << endl;
			}
			else if(remainder > 5 && 10 - remainder < 3) {
				cout << grade + (10 - remainder) << endl;
			}
			else {
				cout << grade << endl;
			}
		}
	}

	return 0;
}