// Bai 23
#include <iostream>
using namespace std;
int main()
{
	cout<<"Bai 23: Dem tat ca cac uoc cua so nguyen duong n"<<endl;
	int n;
	cout<<"Ban muon n=";
	cin>>n;
	// Nhap lai n (neu nhap sai)
	do
	{
		if(n<=0)
		{
			cout<<"Ban da nhap sai so n (n>0)"<<endl;
			cout<<"Moi ban nhap lai n: n=";
			cin>>n;
		}
	}	
	while(n<=0);
	int count=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	cout<<"Co "<<count<<" so la uoc cua "<<n;
	return 0;
} 
