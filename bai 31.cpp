//Bai 31
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Bai 31: Nhap n, kiem tra xem n co phai la so nguyen to hay khong:"<<endl;
	cout<<"Moi ban nhap n: ";
	cin>>n;
	if(n<=0)
	{
		while(n<=0)
		{
			cout<<"Ban nhap khong dung (n>0), moi nhap lai: ";
			cin>>n;
		}
	}
	int count=0;
	for(int i=2;i<=((n/2)+1);i++)
	{
		if(n%i==0)
		count++;
	}
	if (n==1)
	cout<<n<<" khong phai la so nguyen to";
	else if (n==2)
	cout<<n<<" la so nguyen to";
	else if(count==0)
	cout<<n<<" la so nguyen to";
	else
	cout<<n<<" khong phai la so nguyen to";
	return 0;
}
