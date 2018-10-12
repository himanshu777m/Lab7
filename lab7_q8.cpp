//C++ program to find sum of digits of a given number using recursion.

#include <iostream>
using namespace std;

//define function ad=adddigit of number
int ad(int n){
	if (n<= 0){ 
		return 0;
	} 
	return (n%10) + ad(n/10);
	//n%10 give last digit
	//n=1234 thne n%10=4 than int(n/10)=123; return123 and use same thing 
}

//main function
//asking for input and print output of function
int main(){
int n;
	cout << "Enter a number \n";
	cin >> n;
 	cout << "Sum of digits of a number is " << ad(n);
 return 0;
}
