#include <iostream>
using namespace std;

int main() {

	int upperLetters = 0;

	char c;
	while((c = getchar()) != EOF) {
		if(isupper(c)) {
			upperLetters++;
		}
	}

	cout << upperLetters + 1 << endl;

	return 0;
}