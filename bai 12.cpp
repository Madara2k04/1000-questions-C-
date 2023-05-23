// Bai 12
#include <iostream>

using namespace std;
int main()
{
	cout<<"Bai 12: "<<endl;
	cout<<"Tinh: x + x^2 + x^3 + ... + x^n"<<endl;
	int x,n,i=1;
	cout<<"Nhap x=";
	cin>>x;
	cout<<"Nhap n=";
	cin>>n;
	
	float kq=0,S=0,M=1;
	
	while(i<=n)
	{
	M=M*x;
	kq+=M;
	i++;	
	}
	
	
	cout<<"Ket qua la: "<<kq;
	return 0;
 } 
