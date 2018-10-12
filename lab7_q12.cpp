//C++ program to find LCM of two numbers using recursion.


#include<iostream>
#include<cmath>
using namespace std;

//one methode is find lcm using hcf becouse we know lcm*hcf=a*b
//we try to define lcm as using modulus 

int c=1;  //c must be declare out of the scoap of lcm function becouse ints increase 
int lcm(int a, int b){
	
	if(((c%a)==0) && ((c%b)==0)) return c;          //if 1%a=0 & 1%b=0 than lcm=1;
	else{					//else if 2%a=0 & 2%b=o than lcm=2;........
		c++;
		return lcm(a,b);
	}
}



int main(){
int a,b;
cout << "Enter two numbers: ";
cin >> a >>b;
cout << "LCM = " << lcm(a,b) <<endl;
return 0;
}


