#include<iostream>
using namespace std;

int main()
{
    //Declare variables to store the numbers and the result
    int num1, num2, product;

    //prompt the user for input
    cout<<"Enter first number:";
    cin>>num1;

    cout<<"Enter the second number:";
    cin>>num2;

    //perform the mutliplication
    product = num1*num2;

    cout<<"The product of "<<num1<<"and"<<num2<<"is:"<<product<<endl;
    return 0;
}