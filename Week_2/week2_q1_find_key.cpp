#include<iostream>
using namespace std;
//Name-Ayushman Bhatt 
//Section-AI & DS 
//University Roll No-2017640 
//Class Roll No-21
int main()
{
    int z; cin>>z;
    while(z--)
    {
        int s;cin>>s;
        int a[s];
        for(int i=0;i<s;i++)
        cin>>a[i];
        int n,c=0; cin>>n;
        for(int i=0;i<s;i++)
        {
            if(a[i]==n)
            c++;
        }
        cout<<n<<"-"<<c;
    }
}
