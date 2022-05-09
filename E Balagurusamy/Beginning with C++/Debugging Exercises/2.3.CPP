#include<iostream.h>
void main()
{
   int i=10,j=5;
   int modResult=0;
   int divResult=0;
   modResult=i%j;
   cout<<modResult<<" ";
   divResult=i/modResult;//Warning - Division By Zero Error
   cout<<divResult;
}
