#include <iostream>
#include <set>
using namespace std;

int main() {
	char c;
	set<char> letters;

	while((c = getchar()) != EOF) {
		if(isalpha(c)) {
			letters.insert(tolower(c));
		}
	} 

	if(letters.size() == 26) {
		cout << "pangram" << endl;
	}
	else {
		cout << "not pangram" << endl;
	}

	return 0;
}