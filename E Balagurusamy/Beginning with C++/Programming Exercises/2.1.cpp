/* Write a program to display the following output using a single cout statement.
                                Maths = 90
                              Physics = 77
                            Chemistry = 69
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout<<right<<setw(20)<<"Maths = 90"<<"\n"<<right<<setw(20)<<"Physics = 77"<<"\n"<<right<<setw(20)<<"Chemistry = 69";
	return 0;
}
