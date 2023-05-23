#include <iostream>
using namespace std;
int main()
{
	int n,temp=0;
	float kq=0;
	cout<<"Bai 5 tinh: 1+1/3+...+1/(2n+1)"<<endl;
	cout<<"n=";
	cin>>n;
	while(temp<=n)
	{
		kq+=1.0/((2*temp)+1);
		temp++;
	}
	cout<<"Ket qua la: "<<kq<<endl;
	return 0;
}
