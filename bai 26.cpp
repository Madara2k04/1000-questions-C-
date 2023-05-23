// Bai 26
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Bai 26:"<<endl;
    cout<<"Tinh tich cua tat ca cac uoc le cua so nguyen duong n"<<endl;
    cout<<"Moi ban nhap n=";
    cin>>n;
    if(n<=0)
    while (n<=0)
    {
        cout<<"n>0 Moi ban nhap lai:"<<endl;
        cout<<"n=";
        cin>>n;
    }
    int multi=1;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0 and i%2!=0)
        {
            multi*=i;
        }
    }
    cout<<"Tich cac uoc le cua "<<n<<" la: "<<multi;
    return 0;
}