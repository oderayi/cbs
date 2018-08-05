// A program to convert temp reading in degree celcious to fahrenheit using fahreinheit = (9/5) * celcius + 32

#include <iostream>

using namespace std;

int main(){
	const float COEFF1 = 9 / 5;
	const int COEFF2 = 32;
	float tempC, tempF;
	
	cout << "Enter temperature in celcius: ";
	cin >> tempC;
	tempF = COEFF1 * tempC + COEFF2;
	cout << "Temperature in Fahrenheit = " << tempF;
	
	return 0;
}
