// C++ program to print all natural numbers between 1 to n using recursion.

//including library
#include<iostream>
using namespace std;

//Define function that print number 1,2,3,...n
//declare function f(n)=printnumber(n)
int f(int n){
	if(n==1){
		 return 1;
	}
	else{
		cout << n << endl;
		return f(n-1);
	}	
}


//asking for input and print function output
int main(){
	int n;
	cout << "Enter Number: ";
	cin >> n;
	cout << "all natural numbers between 1 to " << n << " is: " <<endl;
	cout << f(n) <<endl;
return 0;
}
