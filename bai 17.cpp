// Bai 17
#include <iostream>
using namespace std;
int main()
{
	cout<<"Bai 17:"<<endl;
	cout<<"Tinh: S(n)=x+(x^2)/2!+(x^3)/3!+ ... +(x^n)/n!"<<endl;
	int x,n;
	cout<<"Moi ban nhap x=";
	cin>>x;
	cout<<"Moi ban nhap n=";
	cin>>n;
	float kq=0,temp=1,T=1;
	for(int i=1;i<=n;i++)
	{
		temp*=x;
		T*=i;
		kq+=(temp)/(T) ;
	}
	cout<<"S(n)="<<kq;
	return 0;
}
