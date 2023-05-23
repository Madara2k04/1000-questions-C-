//Bai 32
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Bai 32: Nhap n, kiem tra xem n co phai la so chinh phuong hay khong"<<endl;
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
	int i;
	for(i=1;i<n/2+1;i++)
	{
		if((i*i)==n)
		{
			break;
		}
	}
	if ((i*i)==n)
	cout<<n<<" la so chinh phuong";
	else
	cout<<n<<" khong phai la so chinh phuong";
	return 0;
}
