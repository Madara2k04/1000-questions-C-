// Bai 19
#include <iostream>
using namespace std;
int main()
{
	cout<<"Bai 19:"<<endl;
	cout<<"Tinh: S(n)=1+x+(x^3)/3!+(x^5)/5!+ ... + (x^(2n+1))/(2n+1)!"<<endl;
	int x,n;
	cout<<"Moi ban nhap x=";
	cin>>x;
	cout<<"Moi ban nhap n=";
	cin>>n;
	do
	{
		if(n<0)
		{
			cout<<"Ban nhap sai gia tri cua n (n>=0)"<<endl;
			cin>>n;
		}
	}
	while(n<0);
	int i=0;
	float kq=1,TS=x,MS,temp=1;
	while(i<=n)
	{
		//Tu so
		TS*=x*x;
		if(i==0)
		TS=x;
		
		// Mau so
		MS*=temp*(temp-1);
		if(i==0)
		MS=1;
		
		//Ket qua
		kq+=(float)(TS)/(MS);
		//Dieu kien
		i++;
		if(i!=0)
		temp+=2;
	}
	cout<<"S(n)="<<kq;
	return 0;
}
