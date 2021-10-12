#include<iostream>
using namespace std;

int main(){
	
	int n,s=0;
	cout<<"Enter the number :"<<endl;
	cin>>n;
	
	for(int i=2;i<=n/2;i++) // we need to check only till n/2 nos. as after n/2 the only factor of n would be n itself.
	{	
		s=0;
		if(n%i!=0)
		s=1;
		else
		{
			cout<<"The entered no. is not a prime number.";
			break;
		}
	}
	
	if(s==1)
	cout<<"The entered number is a prime number";
	
	return 0;
}