// Bai 14
#include <iostream>
using namespace std;
int main()
{
		cout<<"Bai 14:"<<endl;
		cout<<"Tinh: S(n)=x+x^3+x^5+ ... + x^(2n+1)"<<endl;	
		int x,n;
		cout<<"Nhap x=";
		cin>>x;
		cout<<"Nhap n=";
		cin>>n;
		do
		{
			if(n<0)
			{
			cout<<"Ban nhap sai gia tri cua n(n>=0), moi ban nhap lai: "<<endl;
			cout<<"n=";
			cin>>n;
		    }
		}
		while(n<0);
		int i=2,sum=x+x*x*x,temp=x*x*x;
		if(n==0)
		{
			cout<<"S(n)="<<x;
		}
		else if(n==1)
		{
			cout<<"S(n)="<<x+x*x*x;
		}
		else
		{
		while(i<=n)
		{
			temp*=x*x;
			sum+=temp;
			i++;
		}
		cout<<"S(n)="<<sum;
	    }
		return 0;
}
