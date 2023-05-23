// Bai 24
#include <iostream>
using namespace std;
int main()
{
    cout<<"Bai 24:"<<endl;
    int n;
    cout<<"Bai 24: In ra tat ca cac uoc le cua so nguyen duong n "<<endl;
    cout<<"Moi ban nhap n=";
    cin>>n;
    if(n<=0)
    {
        while (n<=0)
        {
        cout<<"n > 0 ban nhap sai moi nhap lai, n=";
        cin>>n;
        }
    }
    cout<<"Cac uoc le cua "<<n<<" la:"<<endl;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0 && i%2!=0)
        cout<<i<<" ";
    }
    return 0;
}
