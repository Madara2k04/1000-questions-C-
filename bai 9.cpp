#include <iostream>
using namespace std;
int main()
{
	cout<<"Bai 9:"<<endl;
	cout<<"Tinh 1*2*3*4*...*n"<<endl;
	int n;
	int multiplication=1;
	do
	{
		cout<<"Nhap n=";
		cin>>n;
		if(n<1)
		{
			cout<<"Nhap sai, moi ban nhap lai"<<endl;
			cin>>n;
		}
	}
	while(n<1);
	for(int i=1;i<=n;i++)
	{
		multiplication*=i;
	}
	cout<<"Ket qua la: "<<multiplication;
	return 0;
}
