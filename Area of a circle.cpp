//PROGRAM THAT CALCULATES AREA OF A CIRCLE
#include<iostream>
using namespace std;
float circle (int r); //function prototype 

int main()

{
int radius;
float area;
cout<<"enter radius"<<endl;
cin>>radius;
       area =circle (radius);   //function calling 
cout<<"the area of a circle is "<<area<<endl;
return 0;}

float circle (int r){
float area;
area=3.142*r*r;
  return area;

}