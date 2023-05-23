//Bai 27
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Bai 27: Dem so luong uoc chan cua so nguyen duong n"<<endl;
    cout<<"Moi ban nhap n=";
    cin>>n;
    if(n<=0)
    while (n<=0)
    {
        cout<<"n>0 Moi ban nhap lai:"<<endl;
        cout<<"n=";
        cin>>n;
    }
    int sum=0;
    for (int i=2;i<=n;i++)
    {
        if(n%i==0 && i%2==0)
        sum+=i;
    }
    cout<<"Tong cac uoc chan cua "<<n<<" la: "<<sum;
    return 0;
}