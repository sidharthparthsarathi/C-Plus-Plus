/*The program defines person as a new data type of type class. The class person includes two basic data type items
 and two functions to operate on that data. These functions are called member functions.
 The main program uses person to declare variables of its type. As pointed out earlier, class variables are known as
 objects. Here, p is an object of type person. Class objects are used to invoke the functions defined in that class.
 */
#include<iostream>
using namespace std;
class Person
{
   char name[30];
   int age;
   public:
   void getdata(void);//void getdata()//same as accepting a void type argument
   void display(void);//void display()//same as accepting a void type argument
};
void Person::getdata(void)//getdata()//same as accepting a void type argument
{
	cout<<"Enter Name: ";
	cin>>name;
	cout<<"Enter Age: ";
	cin>>age;
}
void Person::display(void)//display()//same as accepting a void type argument
{
	cout<<"\nName: "<<name;
	cout<<"\nAge: "<<age;
}
int main()
{
	Person p;
	p.getdata();
	p.display();
	return 0;
}
