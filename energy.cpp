/*
1. Write a procedural C++ program to calculate the energy needed to heat water from ana initial tem to a final temperaturre using the 
formular: energy = mass * final temp - initial temp * 4184
*/

/* 
 Program to calculate the energy needed to heat water from an initial temperature to a final temperature using the 
 formular: energy = mass * final temp - initial temp * 4184
*/


#include <iostream>
using namespace std;

int main(){
	float mass, initialTemp, finalTemp, energy;
	const int COEFF = 4184;
	
	cout << "Enter mass, initial and final temperatures:";
	cin >> initialTemp, finalTemp;
	energy = mass * finalTemp - initialTemp * COEFF;
	cout << "Energy required = " << energy;
	
	return 0;
}
