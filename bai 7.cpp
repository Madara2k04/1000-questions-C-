#include <iostream>

using namespace std;

int main()
{
	cout<<"Bai 7 tinh: 1/2+2/3+3/4+...+n/(n+1)"<<endl<<endl;
	int n;
	float kq;
	do
	{
		cout<<"Nhap n=";
		cin>>n;
		if(n<1)
		{
			cout<<"Nhap sai moi ban nhap lai gia tri n (n la so duong va n>=0) "<<endl;
		}
	}
	while(n<1);
	for(int i=0;i<=n;i++)
	{
		kq+=(float)i/(i+1);
	}
	cout<<"Ket qua bai toan la: "<<kq;
	return 0;
}
