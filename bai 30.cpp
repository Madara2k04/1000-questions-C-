// Bai 30
#include <iostream>
using namespace std;
int main()
{
    cout<<"Bai 30: Cho so nguyen duong n. Kiem tra xem n co phai la so hoan thien hay khong."<<endl;
    int n;
    cout<<"Moi ban nhap n=";
    cin>>n;
    if(n<=0)
    {
        while (n<=0)
        {
            cout<<"n>0 Moi ban nhap lai: ";
            cin>>n;
        }
    }
    int sum=0;
    for (int i=1;i<=((n/2)+1);i++)
    {
        if(n%i==0)
        sum+=i;
    }
    if(sum==n)
    cout<<n<<" la so hoan hao";
    else
    cout<<n<<" khong phai la so hoan hao";
    return 0;
}