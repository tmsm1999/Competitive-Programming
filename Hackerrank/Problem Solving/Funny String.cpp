#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;

	for(int i = 0; i < n; i++) {
		string s;
		cin >> s;

		string is = s;

		for(int i = 0; i < is.length() / 2; i++) {
			char temp = is[i];
			is[i] = is[is.length() - 1 - i];
			is[is.length() - 1 - i] = temp; 
		}

		bool funny = true;
		for(int i = 0; i < s.length() - 1; i++) {
			int diff_s = abs(s[i] - s[i+1]);
			int diff_is = abs(is[i] - is[i+1]); 


			if(diff_s != diff_is) {
				cout << "Not Funny" << endl;
				funny = false;
				break;
			}
		}

		if(funny) {
			cout << "Funny" << endl;
		}
	}

	return 0;

}