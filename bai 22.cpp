// Bai 22
#include <iostream>
using namespace std;
int main()
{
	cout<<"Bai 22: Tinh tich tat ca cac uoc cua so nguyen duong n"<<endl;
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
	int multi=1;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			multi*=i;
		}
	}
	cout<<"Tich tat ca cac uoc cua "<<n<<" la "<<multi;
	return 0;
} 
