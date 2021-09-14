//write include statements
#include<iostream>
#include<data_types.h>


//write namespace using statement for cout

using std::cout;
using std::cin;
using std::endl;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	int num;
	cout<<"Enter a number ";
	cin>>num;
	int result;
	result = multiply_numbers(num);
	cout<<"Result is "<< result;
	cout<<endl;

	int num1;
	num1 = 4;
	result = multiply_numbers(num1);
	cout<<"2nd Result is "<< result;


	return 0;
}
