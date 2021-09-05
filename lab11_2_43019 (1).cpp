// lab11_2_43019.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Ashton Tran
//Paul Koester
//COSC 1436
//4-30-19

#include "pch.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;



 class PayrollClass 
{
public:

	string getName;
	double getPay;
	int getHours;
	double grossPay;


	//Method rpint name//
	void printname()
	{
		cout << "The name  is: " << getName;
		
	}

	//method pay rate//
	void printPay()
	{
		cout << "The pay is: " << getPay;
		
	}
	//method get hours//
	void printHours()
	{
		cout << "Employee work this many hours: " << getHours;
		
	}

	
	
 };

int main()
{
	
	PayrollClass PRobj;

	cout << "Please enter the employee name ";
	cin >> PRobj.getName;
	//PRobj.printname();

	cout << "Please enter the pay rate ";
	cin >> PRobj.getPay;
	//PRobj.printPay();

	cout << "Please enter the hours worked ";
	cin >> PRobj.getHours;
	//PRobj.printHours();




	//The equation for gross pay//
	PRobj.grossPay = PRobj.getPay * PRobj.getHours;
	

	cout << fixed;
	cout << setprecision(2);
	cout << "The gross pay is $" << PRobj.grossPay;
	

	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
