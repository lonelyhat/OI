#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n],c[n],d[n];
    for(int i =1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]>200)
        {
            b[i]=a[i];
            c[i]=0;
            d[i]=0;
        }else
        {
            if(a[i]<150)
            {
                d[i]=a[i];
                b[i]=0;
                c[i]=0;
            }else
            {
                c[i]=a[i];
                b[i]=0;
                d[i]=0;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {   
        cout<<b[i]<<'\t'<<c[i]<<'\t'<<d[i]<<endl;
    }   
        return 0;
 }
