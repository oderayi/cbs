// Program to fnd the sum and average of two numbers

#include <iostream>
using namespace std;

int main(){
	float fnum, snum, sum, average;
	
	cout << "Enter first and second number:";
	cin >> fnum >> snum;
	sum = fnum + snum;
	average = sum / 2;
	cout << "\n" << "Sum = " << sum << endl;
	cout << "Average = " << average << endl;
	return 0;
}
