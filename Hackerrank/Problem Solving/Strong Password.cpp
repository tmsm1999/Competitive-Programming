#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {

	int missingChars = 0;

	int length = 0;
	string password = " ";

	cin >> length;
	cin >> password;

	//if(length < 6) {
	//	missingChars = 6 - length;
	//}

	vector<char> splitPassword(password.begin(), password.end()); 

	bool hasNumber = false;
	bool lowerCase = false;
	bool upperCase = false;
	bool specialChar = false;

	for(int i = 0; i < length; i++) {
		if(splitPassword[i] >= '0' && splitPassword[i] <= '9') {
			hasNumber = true;
		}
		else if(splitPassword[i] >= 'a' && splitPassword[i] <= 'z') {
			lowerCase = true;
		}
		else if(splitPassword[i] >= 'A' && splitPassword[i] <= 'Z') {
			upperCase = true;
		}
		else {
			specialChar = true;
		}
	}

	if(!hasNumber) {
		missingChars++;
	}
	if(!lowerCase) {
		missingChars++;
	}
	if(!upperCase) {
		missingChars++;
	}
	if(!specialChar) {
		missingChars++;
	}
    if(length + missingChars < 6) {
        missingChars = missingChars + (6 - (length + missingChars));
    }

	cout << missingChars;
}