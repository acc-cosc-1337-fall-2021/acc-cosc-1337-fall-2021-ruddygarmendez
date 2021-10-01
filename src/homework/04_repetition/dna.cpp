//add include statements

#include "dna.h"

//add function(s) code here

int factorial (int num)
{
int prod;
prod=1;

    while (num>0){
        prod*=num;
        num--;
    };

return prod;

}



int gcd (int num1, int num2){

int temp;

    while (num1!=num2){
        if (num2>num1){
            temp=num2;
            num2=num1;
            num1=temp;
        }

        if (num1>num2){
            num1=num1-num2;

        }
    
    }


}