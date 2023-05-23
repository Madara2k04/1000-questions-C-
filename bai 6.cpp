#include <iostream>
using namespace std;
float ketqua(int n, float kq)
{
	int temp=1;
	do
	{
		kq+=(float)1/(temp*(temp+1));
		temp++;
	}
	while(temp<=n);
	return kq;
}
int main()
{
	cout<<"Bai 6 tinh: 1/(1*2)+ 1/(2*3)+ ...+ 1/(n*(n+1))"<<endl<<endl;
	cout<<"n khac 0"<<endl<<endl;
	int n;
	float kq;
	cout<<"n=";
	cin>>n;
	cout<<"Ket qua la: "<<ketqua(n,kq);
	return 0;
}
