#include<iostream>
using namespace std;

void quiz(int i)
{
	if(i>1)
	{
		quiz(i/2);
		quiz(i/2);
	}
	cout<<"#"<<endl;
}

int main()
{
	quiz(5);
	return 0;
}
