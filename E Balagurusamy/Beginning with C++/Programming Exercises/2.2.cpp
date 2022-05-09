/* Write a program to read two numbers from the keyboard and display the larger value on the screen. //WEB
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
	cin>>b;
	cout<<"Larger value is: "; //"\n" is not required here in many lines because when you press enter after input control automatically goes on to next line
	if(a>b)
	{
	   cout<<a;	
	}	
	else
	{
		cout<<b;
	}
	return 0;
} 
