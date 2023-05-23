#include <iostream>
using namespace std;
int main()
{
	cout<<"Bai 10:"<<endl;
	cout<<"Tinh x^n"<<endl;
	int n,x;
	cout<<"Nhap n=";
	cin>>n;
	do
	{
		if(n<0)
		{
			cout<<"Ban nhap sai n, moi nhap lai: n=";
			cin>>n;
		}
	}
	while(n<0);
	cout<<endl;
	cout<<"Nhap x=";
	cin>>x;
	do
	{
		if(x<0)
		{
			cout<<"Ban nhap sai x, moi nhap lai: x=";
			cin>>x;
		}
	}
	while(x<0);
	long long kq=x;

	if(n==0 && x==0)
	{
		cout<<"Ket qua nhap la ket qua vo dinh";
	}
	else
	{
		for(int i=1;i<n;i++)
		{
			kq=kq*x;
		}
	}
	
	cout<<"Ket qua la: "<<kq;
	return 0;
}
