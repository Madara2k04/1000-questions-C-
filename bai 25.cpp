// Bai 25
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Bai 25:"<<endl;
    cout<<"Tinh tong uoc chan cua so nguyen duong n"<<endl;
    cout<<"Moi ban nhap n: ";
    cin>>n;
    if (n<=0)
    {
        while (n<=0)
        {
            cout<<"n>0 moi ban nhap lai: ";
            cin>>n;
        }
    }
    int i=2,sum=0;
    while (i<=n)
    {
        if (n%i==0 && i%2==0)
        sum+=i;
        i++;
    }
    cout<<"Tong cac uoc chan cua "<<n<<" la: "<<sum;
    return 0;
}