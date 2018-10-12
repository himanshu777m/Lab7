//program to find factorial of any number using recursion.
#include <iostream>
using namespace std;

//Using Tail end recursion
//Defining the function work as a!=a*(a-1)!
//f(n)=f(n-1)*n

int f(int n) {
	if (n = 1)
		return n*f(n-1);

	else 
		return 1;
}

//asking for input number

int main() {
	int n;
	cout << "Enter the number: " << endl;
	cin >> n ;
	cout << "The factorial of your number is " << f(n) << endl ;
return 0;
}
