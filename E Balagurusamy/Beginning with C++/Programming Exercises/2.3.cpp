/* Write a program that inputs a character from keyboard and displays its corresponding ASCII value on the screen. //WEB
*/
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a Character: ";
	cin>>ch;
	cout<<"Ascii value of "<<ch<<" is "<<(int)ch;//C- Style Conversion        //int(ch) - Function Type Conversion
}
