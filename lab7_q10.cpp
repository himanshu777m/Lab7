// program to generate nth Fibonacci term using recursion.

//including library
#include<iostream>
using namespace std;

//Define function for nth term of fibonacci series 0,1,1,2,3,5,8,13,... 
//over function is f(n)=f(n-1)+f(n-2)

int f(int n){
	if(n==1){
		 return 0;			//first term
	}
	else if(n==2){				//secound term
		 return 1;
	}
	else{
		 return (f(n-1)+f(n-2));      //f(n)=f(n-1)+f(n-2)
	}	
}

int main(){
	int n;
	cout << "Enter which term you find: ";
	cin >> n;
	cout << n <<" th term of fibonacci series 0,1,1,2,3,5,8,13,... is: " << f(n) <<endl;
return 0;
}
