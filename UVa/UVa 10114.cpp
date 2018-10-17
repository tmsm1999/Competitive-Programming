#include <iostream>
using namespace std;

int main() {
	int duration, depreciationRec, month, nextMonth = 0;
	double downPayment, amountLoan, depressPerc = 0.0;

	cin >> duration >> downPayment >> amountLoan >> depreciationRec;

	while(duration > 0) {
		double months[duration];
		int curMonth, nextMonth = 0;
		double curPercentage, nextPercentage = 0.0;

		cin >> curMonth >> curPercentage;
		for(int i = 0; i < depreciationRec; i++) {
			if(i + 1 < depreciationRec) {
				cin >> nextMonth >> nextPercentage;
				for(int j = curMonth; j < nextMonth; j++) {
					months[j] = curPercentage;
				}
				curMonth = nextMonth;
				curPercentage = nextPercentage;
			}
			else {
				for(int j = curMonth; j < duration; j++) {
					months[j] = curPercentage;
				}
			}
		}

		double monthlyPayment = amountLoan / duration;
 		double carValue = amountLoan + downPayment;
 		carValue -= carValue * months[0];
 		int counter = 0;
 		int i = 1;

 		//cout << "valor emprestimo: " << amountLoan << " | " << "valor carro: " << carValue << endl;

 		while(amountLoan >= carValue) {
 			carValue -= carValue * months[i];
 			amountLoan -= monthlyPayment;
 			counter++;
 			i++;
 		}

 		if(counter != 1) {
 			cout << counter << " months" << endl;
 		}
 		else {
 			cout << counter << " month" << endl;
 		}
		
		cin >> duration >> downPayment >> amountLoan >> depreciationRec;
	}
	return 0;
}