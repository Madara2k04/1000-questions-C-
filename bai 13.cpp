// Bai 13
#include <iostream>
using namespace std;
int main()
{
	cout<<"Bai 13: "<<endl;
	cout<<"Tinh: S(n)= x^2 + x^4 + ... + x^2n"<<endl;
	
	
	int x,n;
	cout<<"Moi ban nhap x=";
	cin>>x;
	cout<<"Moi ban nhap n=";
	cin>>n;
	
	int kq,temp=1,i=2;
	while(i<=(2*n))
	{
		temp*=x*x;
		kq+=temp;
		i+=2;
	}
	cout<<"S(n)="<<kq;
	return 0;
}
