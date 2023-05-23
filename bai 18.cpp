// Bai 18
#include <iostream>
using namespace std;
int main()
{
	cout<<"Bai 18:"<<endl;
	cout<<"Tinh: S(n)=1+(x^2)/2! + (x^4)/4! +...+ (x^2n)/(2n)!"<<endl;
	int x,n;
	cout<<"Moi ban nhap x=";
	cin>>x;
	cout<<"Moi ban nhap n=";
	cin>>n;
	int i=1,GT=1,M=1;
	float kq=0,temp=1;
	if(n==0)
	{
		cout<<"S(n)="<<1;
	}
	else
	{
	while(i<=n)
	{
		temp*=x*x;
		M=2*i;
		GT*=M*(M-1);
		kq+=(float)(temp)/(GT);
		i++;
	}
	cout<<"S(n)="<<(kq+1);
	}
	return 0;
}
