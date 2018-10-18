#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;

bool howToCompare(string i, string j) {
	if(i.length() > j.length()) {
		return false;
	}
	else if(i.length() < j.length()) {
		return true;
	}
	else {
		for(int k = 0; k < i.length(); k++) {
			if(i[k] - '0' < j[k] - '0') {
				return true;
			}
			else if (i[k] - '0' > j[k] - '0'){
				return false;
			}
		}
	}
	return false;
}

int main() {
	int n;
	cin >> n;

	string array[n];
	for(int i = 0; i < n; i++) {
		cin >> array[i];
	}

	sort(array, array + n, howToCompare);

	for(int i = 0; i < n; i++) {
		cout << array[i] << endl;
	}
	return 0;
}



// ----> Solução que usa o Insertion Sort

// int main() {
// 	int n;
// 	cin >> n;

// 	string array[n];
// 	for(int i = 0; i < n; i++) {
// 		string next;
// 		cin >> next;

// 		if(i == 0) {
// 			array[0] = next;
// 		}
// 		else {
// 			bool inserted = false;

// 			for(int j = 0; j < i; j++) {
// 				bool smaller = false;

// 				if(next.length() < array[j].length()) {
// 					smaller = true;
// 				}
// 				else if(next.length() > array[j].length()) {
// 					smaller = false;
// 				}
// 				else { //comparar digito a digito
// 					for(int a = 0; a < next.length(); a++) {
// 						if(next[a] < array[j][a]) {
// 							smaller = true;
// 							break;
// 						}
// 						else if(next[a] > array[j][a]) {
// 							break;
// 						}
// 					}
// 				}
				
// 				if(smaller) {
// 					for(int k = i; k >= j; k--) {
// 						array[k+1] = array[k];
// 					}
// 					array[j] = next;
// 					inserted = true;
// 					break;
// 				}
// 			}

// 			if(inserted == false) {
// 				array[i] = next;
// 			}
// 		}
// 	}

// 	for(int i = 0; i < n; i++) {
// 		cout << array[i] << endl;
// 	}

// 	return 0;
// }