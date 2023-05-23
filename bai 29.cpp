// Bai 29
#include <iostream>
using namespace std;
int main()
{
    cout<<"Bai 29:  Tim uoc le lon nhat cua so nguyen duong n"<<endl;
    int n, ulln=0;
    cout<<"Moi ban nhap n=";
    cin>>n;
    if (n<=0)
    {
        while (n<=0)
        {
            cout<<"n>0 Moi ban nhap lai: ";
            cin>>n;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(n%i==0 && i%2!=0)
        ulln=i;
    }
    cout<<"Uoc le lon nhat cua "<<n<<" la: "<<ulln;
    return 0;
}