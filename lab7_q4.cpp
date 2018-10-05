//program to find sum of all natural numbers between 1 to n using recursion.

//including library
#include<iostream>
using namespace std;

//Define function for sum=1+2+...+n as f(n)=n+f(n-1)

int sum(int n){
	if(n==1){
		 return 1;
	}
	else{
		 return (n + sum(n-1));      //sum(n)=n+sum(n-1)
	}	
}

int main(){
	int n;
	cout << "Enter Number: ";
	cin >> n;
	cout << "Sum of all natural numbers between 1 to " << n << " is: " << sum(n) <<endl;
return 0;
}
