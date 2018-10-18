#include <iostream>
#include <cstdio>
#include <string>
#include <map>
using namespace std;

int main() {
	int n = 0;
	cin >> n;

	string toMatch = "hackerrank";

	for(int i = 0; i < n; i++) {
		bool exists[10] = {false, false, false, false, false, false, false, false, false, false};

		string sequence;
		cin >> sequence;

		int charIndex = 0;
		for(int i = 0; i < sequence.length(); i++) {
			char thisChar = toMatch[charIndex];
			if(thisChar == sequence[i]) {
				exists[charIndex] = true;
				charIndex++;
			}
		}


		bool allTrue = true;
		for(int i = 0; i < toMatch.length(); i++) {
			if(exists[i] == false) {
				allTrue = false;
			}
		}

		if(allTrue) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

	return 0;
}
