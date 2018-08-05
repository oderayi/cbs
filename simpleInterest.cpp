/*
 The simple interest on a principal (P) at a rate (R) for time (T) ins computed as
 Simple Interest = PRT / 100
 Write a C++ program to input P, R and T, and compute the simple interest
*/

// Program to compute simple interest 

#include <iostream>

using namespace std;

int main(){
	float principal, rate, simpleInterest, time;

	cout << "Enter principal, rate and time:" << endl;
	cin >> principal >> rate >> time;
	simpleInterest = (principal * rate * time) / 100;
	cout << endl;
	cout << "Simple interest = " << simpleInterest;

	return 0;
}
