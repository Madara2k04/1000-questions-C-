#include <iostream>
using namespace std;
int main()
{
	cout<<"Tinh 1+1/2+1/3+...+1/n"<<endl;
	cout<<"n=";
	int n;
	float kq=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		kq+=1.0/i;
	}
	cout<<"Ket qua la: "<<kq;
	return 0;
}
