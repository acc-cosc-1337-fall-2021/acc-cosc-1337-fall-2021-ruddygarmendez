//write include statements
#include<iostream>
#include<string>
#include"decisions.h"

using std::cout;
using std::cin;

int main() 
{
	int grade;
	int choice;
	cout<<"MAIN MENU\n";	
	cout<<"\n";
	cout<<"1 - Letter grade using if\n";	
	cout<<"2 - Letter grade using switch\n";
	cout<<"3 - Exit\n";	
	cin>>choice;

	if (choice == 1 || choice ==2){
		int grade;
		grade=0;

		cout<< "Please enter your number grade\n";
		cin>>grade;

		if (grade >= 0 && grade <=100){
			switch(choice){
				case 1:
					cout<<"Your letter grade is "<<get_letter_grade_using_if(grade);
					break;
				case 2:
					cout<<"Your letter grade is "<<get_letter_grade_using_switch(grade);
					break;
				default:
					cout<<"Invalid option";
					break;		
			}
		}
		else {
			cout<<"The number you entered is out of range\n";
		}
	
	}

	else if (choice==3){
		cout<<"Program will exit now.";
	}

	else{
		cout<<"Invalid option";
	}
	



	return 0;
}