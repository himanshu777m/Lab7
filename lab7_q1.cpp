//program to find power of any number using recursion.
#include <iostream>
using namespace std;

//Defining the function work as f(a,b) = a^b
//write a^b = (a^(b-1))*a
//f(a,b)= a*f(a,b-1)

int pow(int a, int b) {
	if (b==0) return 1;
	else 
		return a* pow (a,b-1);
}

//main function
//asking input

int main () {
	int a, b;
	cout << "Enter your base number." << endl;
	cin >> a ;
	cout << "Enter your exponent number." << endl;
	cin >> b ;
	cout << "So the resultant power of your number is " << pow(a,b) << endl ;
	return 0;
	}

