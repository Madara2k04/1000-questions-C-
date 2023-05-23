#include <iostream>99
using namespace std;
int main()
{
		cout<<"Tinh 1+2+...+n:"<<endl;
		cout<<"n=";
		int n,sum=0;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			sum+=i;
		}
		cout<<"Tong la: "<<sum;
		return 0;
} 
