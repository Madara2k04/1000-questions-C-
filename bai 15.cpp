// Bai 15
#include <iostream>
using namespace std;
int main()
{
	cout<<"Bai 15:"<<endl;
	cout<<"Tinh: S(n)=1+1/(1+2)+1/(1+2+3)+ ... + 1/(1+2+3+...+n)"<<endl;
	int n;
	cout<<"Moi ban nhap n=";
	cin>>n;
	do
	{
		if(n<0)
		{
			cout<<"Ban da nhap sai n (n>=0), moi ban nhap lai"<<endl;
			cout<<"Gia tri n=";
			cin>>n;
		}
	}
	while(n<0);
	float sum=0,temp=0;
	int i=1;
	while(i<=n)
	{
		temp+=i;
		sum+=(float)1/temp;
		i++;
	}
	cout<<"S(n)="<<sum;
	return 0;
}
