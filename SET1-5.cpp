#include <iostream>
using namespace std;

int main() 
{
	int a,b,c;
	cout<<"Enter a numbers\n ";
	cin>>a>>b>>c;
	if((a>b)&&(a>c))
	{
		
		cout<<a<<"\t is greater";
	}
	else if(b>c)
	{
		cout<<b<<"\t is greater";
	}
	else
	{
			cout<<c<<"\t is greater";
	}
	
	return 0;
}
