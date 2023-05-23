#include <iostream>
using namespace std;
int main()
{
   cout<<"Tinh: 1^2 + 2^2 + ... + n^2"<<endl;
   cout<<"Nhap n= ";
   int n , ketqua=0;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
   	ketqua+=i*i;
   }
   cout<<"Ket qua la: "<<ketqua;
   return 0;
}
