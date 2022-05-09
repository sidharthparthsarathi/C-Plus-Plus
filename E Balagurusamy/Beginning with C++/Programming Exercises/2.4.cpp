/* Write a program to read the values of a, b and c displays the value of x, where
                                      x=a/b-c
    Test your program for the following values:
    (a) a=250,b=85,c=25
    (b) a=300,b=70,c=70 //WEB
*/
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<"Enter the second number: ";
	cin>>b;
	cout<<"Enter the third number: ";
	cin>>c;
	int x=a/b-c;     //used Copy Constructor
	cout<<"x = "<<x;
	/*(a) a=250,b=85,c=25   //Output : -23
    (b) a=300,b=70,c=70     //Output : -66 
    */
}
