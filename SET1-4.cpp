#include <iostream>
using namespace std;

int main() 
{
	char mm;
	cout<<"Enter a character\n ";
	cin>>mm;
	if((mm>='a'&& mm<='z') || (mm>='A' && mm<='Z'))
	{
		cout<<" the given character  is alphabet";
	}
	else
	{
		cout<<" is not an alphabet";
	
}
	return 0;
}
