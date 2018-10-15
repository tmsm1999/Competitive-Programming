#include <iostream>
using namespace std;

int main() {
	int n = 0;
	int N, M = 0;

	cin >> n;

	while(n != 0) {

		cin >> N >> M;

		for(int i = 0; i < n; i++) {
			
			int x, y = 0;
			cin >> x >> y;

			if(x < N && y > M) {
				cout << "NO" << endl;
			}
			else if(x > N && y > M) {
				cout << "NE" << endl;
			}
			else if(x > N && y < M) {
				cout << "SE" << endl;
			}
			else if(x < N && y < M) {
				cout << "SO" << endl;
			}
			else {
				cout << "divisa" << endl;
			}
		}

		cin >> n;
	}

	return 0;
}

//In this problem the reading the input is pretty straightfoward.
//One has only to pay attention to the signal of the coordentes to know in which quadrant it is located.
//The only trick is to know if the point is located in a division.
