//write include statements

#include<iostream>
#include<string>
#include"dna.h"


//write using statements

using std::cout;
using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/



int main() 
{
	int choice;
	int num;
	int num1;
	int num2;



	do{
		cout<<"\n";
		cout<<"MAIN MENU\n";	
		cout<<"\n";
		cout<<"1 - Factorial\n";	
		cout<<"2 - Greatest Common Divisor\n";
		cout<<"3 - Exit\n";	
		cout<<"ENTER YOUR CHOICE:\n";
		cin>>choice;
	

		switch(choice){
				case 1:
					cout<<"You have chosen Factorial\n ";
					cout<<"Please enter an integer\n";
					cin>>num;
					cout<<"The answer is: "<<factorial(num);
					break;
					
				case 2:
					cout<<"You have chosen Greatest Common Divisor";
					cout<<"Pleae enter Integer 1 \n";
					cin>>num1;
					cout<<"Pleae enter Integer 2 \n";
					cin>>num2;
					cout<<"The answer is: "<<gcd(num1,num2);
					break;

				case 3:
					char confirm;
					cout<<"Are you sure you want to exit? (Y) or (N)\n";
					cin>>confirm;

					if (confirm=='Y'||confirm=='y'){
					break;
					}
					else{
						choice=4;
						break;
					}



				default:
					cout<<"Invalid option";
					break;	
				}

	} while (choice !=3);


	return 0;
}