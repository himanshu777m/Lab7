//program to print all even or odd numbers in given range using recursion.

#include<iostream>
using namespace std;

int f(int l,int u){
	if(l<u)
	{
		cout << l << endl;
		f(l+2,u);
	}
}

int g(int l,int u){
	if(l<u)
	{
		cout << l+1 << endl;
		g(l+2,u);
	}
}


int main(){
	int l,u;
	cout<<"Enter lower limit: ";
	cin>>l;
	cout<<"Enter upper limit: ";
	cin>>u;
	
	if(l%2==0){
		cout << "Even Numbers from "<< l <<" to "<< u <<endl;
   		cout << f(l,u) << endl;
		cout << "odd Numbers from "<< l <<" to "<< u <<endl;
   		cout << g(l,u) << endl;
 	}

	else{
		cout << "Odd Numbers from "<< l <<" to "<< u <<endl;
   		cout << f(l,u) << endl;
		cout << "Even Numbers from "<< l <<" to "<< u <<endl;
   		cout << g(l,u) << endl;
 	}


return 0;
}	
