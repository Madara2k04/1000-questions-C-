// Bai 21
#include <iostream>
using namespace std;
int main()
{
	cout<<"Bai 21: Tinh tong tat ca cac uoc cua so nguyen duong n"<<endl;
	int n;
	cout<<"Ban muon n=";
	cin>>n;
	// Nhap lai n (neu nhap sai)
	do
	{
		if(n<=0)
		{
			cout<<"Ban da nhap sai so n (n>0)"<<endl;
			cout<<"Moi ban nhap lai n: n=";
			cin>>n;
		}
	}	
	while(n<=0);
		int sum=0;

	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	cout<<"Tong cac uoc so nguyen duong "<<n<<" la "<<sum;
	return 0;
} 
