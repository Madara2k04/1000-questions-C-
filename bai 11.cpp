// Bai 11  
#include <iostream>
using namespace std;
int main()
{
	cout<<"Bai 11:"<<endl;
	cout<<"Tinh 1+1x2+1x2x3+...+1x2x3x...xn"<<endl;
	cout<<"Nhap n=";
	int n;
	cin>>n;
	do 
	{
		if(n<1)
		{
		cout<<"Nhap sai n, moi nhap lai n=";
		cin>>n;
		}
	} 
	while(n<1);
	int temp=1;
	long kq; 
	int i=1;
	 while(i <= n)
    {
        temp = temp*i;
        kq = kq+temp;
        i++;
    }
    kq=kq-1;
    cout<<"Ket qua la: "<<kq;
    return 0;
}
