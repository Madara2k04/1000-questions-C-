#include <iostream>
using namespace std;
int main()
{
	cout<<"Tinh: 1/2+1/4+...+1/2n"<<endl;
	cout<<"Ban muon n=";
	int n,temp=1;
	cin>>n;
	float kq;
	do
	{
		kq+=1.0/(2*temp);
		temp++;
	}
	while(temp<=n);
	cout<<"Ket qua la: "<<kq;
	return 0;
}
