#include<iostream>
#include<cmath>

using namespace std;

int main(){
	// defining variables
	double num1, num2;
	char operation, redo;
	
	// printing names
	cout<<"Welcome to mini calculator"<<endl;
	cout<<"**************************"<<endl;
	cout<<endl<<endl<<endl;
	
	do{
		// receiving variable
		cout<<"Please choose an operators you want to use (+,-,*,/,s)";
		cout<<"[s stands for swap]: ";
		cin>>operation;
		cout<<endl<<endl;
		cout<<"Please Enter two digit numbers(";
		cout<<operation<<"):"<<endl<<"1st num:\t";
		cin>>num1;
		cout<<"2nd num:\t";
		cin>>num2;
		cout<<endl;
		
		//using switch to change operators
		switch(operation){
			//calculating and printing the answer
			case'+':
				cout<<"Adding the two numbers ("<<num1<<","<<num2<<"): ";
				cout<<num1+num2<<endl;
				break;
			
			case'-':
				cout<<"Subtracting the two numbers("<<num1<<","<<num2<<"): ";
				cout<<num1-num2<<endl;
				break;
			
			case'*':
				cout<<"Multiplying the two numbers("<<num1<<","<<num2<<"): ";
				cout<<num1*num2<<endl;
				break;
			
			case'/':
				cout<<"Diving two numbers("<<num1<<","<<num2<<"): ";
				if(num2==0){
					cout<<"not valid"<<endl;
				}
				cout<<(num1/num2)<<endl;
				break;
			
			case's':
				cout<<"The swap of two numbers("<<num1<<","<<num2<<"): ";
				swap(num1,num2);
				cout<<"1st number="<<num1<<"and 2nd number="<<num2<<endl<<endl;
				break;
		}
		cout<<"Enter y or Y to continue: ";
		cin>>redo;
		cout<<endl<<endl;
	}
	while(redo=='y'|| redo=='Y');
	
	return 0;
}
