/* Redo Exercise 2.5 using a class called temp and member functions. WEB
*/
#include<iostream>
using namespace std;
class temp
{
	private:
		float temperature;
		int celsius;
	public:
		void getdata()
		{
			cout<<"Enter the temperature(Fahrenheit): ";
	        cin>>temperature;
	        celsius=(((temperature-32)*5/9));//(int)(((temperature-32)*5/9)) Typecasting not required.
	        //it will be implicitly typecasted to int.because in integer datatype only int part will copied.
	        //Mantissa part will be ignored automatically as only integer part of decimal is getting stored.
		}
		void display()
		{
			cout<<"Celsius = "<<celsius;
		}
};
int main()
{
	temp t;
	t.getdata();
	t.display();
	return 0;
}
