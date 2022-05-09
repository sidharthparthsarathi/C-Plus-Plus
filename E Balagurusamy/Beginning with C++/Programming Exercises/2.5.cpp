/* Write a C++ program that will ask for a temperature in Fahrenheit and display it in Celsius. WEB
*/
#include<iostream>
using namespace std;
int main()
{
	float temperature;
	int celsius;
	cout<<"Enter the temperature(Fahrenheit): ";
	cin>>temperature;
	celsius=(((temperature-32)*5/9));//(int)(((temperature-32)*5/9)) Typecasting not required.
	//it will be implicitly typecasted to int.because in integer datatype only int part will copied.
	//Mantissa part will be ignored automatically as only integer part of decimal is getting stored.
	cout<<"Celsius = "<<celsius;
	return 0;
}
