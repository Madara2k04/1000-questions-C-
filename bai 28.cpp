// Bai 28
#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Bai 28: Cho so nguyen duong n. Tinh tong cac uoc cua n nho hon chinh no"<<endl;
    cout<<"(n>0) Moi ban nhap n: ";
    cin>>n;
    if(n<=0)
    while (n<=0)
    {
        cout<<"n>0 Moi ban nhap lai:"<<endl;
        cout<<"n=";
        cin>>n;
    }
    cout<<"Cac uoc nho hon "<<n<<" la: ";
    for(int i=1;i<=((n/2)+1);i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            sum+=i;
        }
    }
    cout<<endl;
    cout<<"Tong cac uoc nho hon "<<n<<" la: "<<sum;
    return 0;
}