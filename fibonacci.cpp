//WAP to display the fibonnacci series upto 50 terms
//for good practice i'll take input  from the users.
#include<iostream>

using namespace std;

int main()
{
	int num;
	int t1=0, t2=1, nextval=0;
	cout<<"enter the terms you want to see the series";
	cin>>num;
	cout<<"the series starts from here"<<endl;
	for(int i=0; i<num;i++)
	{
			cout<<t1<<endl;
			nextval=t1+t2;
			t1=t2;
			t2=nextval;
	}
	return 0;
}
	
