#include<bits/stdc++.h>
using namespace std;
//Name-Ayushman Bhatt 
//Section-AI & DS 
//University Roll No-2017640 
//Class Roll No-21
void findDuplicate(int a[], int x)
{
    for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
            if(a[i]==a[j]){
                cout<<"YES"<<endl;
            }
            break;
        }
    }
            cout<<"NO"<<endl;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        int a[x];
        for(int i=0;i<x;i++){
            cin>>a[i];
        }
        findDuplicate(a ,x);
    }
}
