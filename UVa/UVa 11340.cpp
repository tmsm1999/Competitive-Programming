#include <iostream>
using namespace std;

int main() {
	int n, c, lines; // number of test cases and characters
	cin >> n;


	for(int i = 0; i < n; i++) {

		int prices[255] = {0};

		cin >> c;
		for(int j = 0; j < c; j++) {
			char c; int cents;
			cin >> c >> cents;
			prices[c] = cents;

		}

		cin >> lines;
		cin.ignore();
		unsigned char c; double payment = 0;

		for(int k = 0; k < lines; k++) {
			while((c = getchar()) != '\n') {
				payment += prices[c];
			}
		}

		payment /= 100;
		printf("%.2f$\n", payment);
	}

	return 0;
}
