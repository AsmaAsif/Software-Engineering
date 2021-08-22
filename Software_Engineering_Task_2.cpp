// Software_Engineering_Task_2.cpp : This file contains the 'main' function.
//  Program execution begins and ends there.

#include <iostream>
using namespace std;
int main()
{
	double base,height;
   cout << "Enter base to calculate area of trinagle!\n";
   cin >> base;
   cout << "Enter height to calculate area of trinagle!\n";
   cin >> height;
   double area =  0.5 * base * height;
   cout << "Area of Triangle is: " << area;
}
