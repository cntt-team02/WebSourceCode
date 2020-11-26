#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"***CHUONG TRINH TINH THUONG 2 SO A VA B***"<<endl;
	cout<<"NHAP A: ";
	cin>>a;
	do
	{
		cout<<"NHAP B: ";
		cin>>b;
	}while(b==0);
		
	
	cout<<"THUONG CUA 2 SO A VA B LA: "<<a/b;
	return 0;
}
