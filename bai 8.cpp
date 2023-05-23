#include <iostream>

using namespace std;

int main()
{
	cout<<"Bai 8:"<<endl;
	cout<<"Tinh 1/2+3/4+5/6+...+(2n+1)/(2n+2)"<<endl; 
	int n,i=0;
	float kq=0;
	do
	{
		cout<<"Nhap n=";
		cin>>n;
		if(n<0)
		{
			cout<<"Nhap sai, moi nhap lai"<<endl;
		}
	}
	while(n<0);
	
	
	while(i<=n)
	{
		kq+=(float)(2*i+1)/(2*i+2);
		i++;
	}
	cout<<"Ket qua la: "<<kq;
	return 0;
}
