﻿//write include statements
#include<iostream>
#include<hwexpressions.h>

//write namespace using statement for cout
using std::cout;
using std::cin;


/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;

	cout<<"Please enter meal amount\n";	
	cin>>meal_amount;

	tax_amount=get_sales_tax_amount(meal_amount);

	cout<<"Please enter tip rate(using decimals)\n";	
	cin>>tip_rate;

	tip_amount=get_tip_amount(meal_amount, tip_rate);

	total=meal_amount+tax_amount+tip_amount;

	cout<<"Here is your receipt\n";
	cout<<"Meal Amount\t"<<meal_amount<<"\n";
	cout<<"Sales Tax\t"<<tax_amount<<"\n";
	cout<<"Tip Amount\t"<<tip_amount<<"\n";
	cout<<"Total\t\t"<<total<<"\n";


	return 0;
}
