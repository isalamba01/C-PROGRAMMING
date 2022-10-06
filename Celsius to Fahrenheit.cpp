//PROGRAM THAT  CONVERTS Celsius to Fahrenheit 
#include<iostream>
using namespace std;
float temp(float fahrenheit);  //function prototype 
int main ()
{
float fahrenheit, celcius;
cout<<"enter the temperature in celcius"<<endl;
cin>>celcius; 
fahrenheit=temp(celcius);  // function calling 

cout<<"temperature in fahrenheit is "<<fahrenheit<<endl;
return 0;

}
float temp(float celcius){
float fahrenheit;
fahrenheit=(celcius *9/5)+32;
return fahrenheit;
} 