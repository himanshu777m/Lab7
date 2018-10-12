// program to find GCD (HCF) of two numbers using recursion.

//includinfg library
#include<iostream>
#include<cmath>
using namespace std;

/*write fuction that work as
int main(){
int n,m;
cout << "Enter two number: \n";
cin >> n >> m;
 
    while(n != m)
    {
        if(n > m)
        	n -= m;
       	else
        	m -= n;
    }
	cout << "HCF = " << n;
return 0;
}  */


//than our function is like
int hcf(int a, int b){

	if (b != 0)
		return hcf(b, a % b);
	else 
		return a;
}
//here h(50,15)=h(15,5)=(5,0)=5
//and if b>a than h(15,100)=h(100,15) and work
//so we dont give condition on inequlity of a an b

int main(){
int p,q;
cout << "Enter the numbers: ";
cin  >> p >> q;
cout << "HCF= " << hcf(p,q)<<endl;
return 0;
}

	
