#include<simplecpp>
#include<iostream>
using namespace std;

main_program{
    int  n;
    int f=0,s=1,t=0,k=0;
    cin>>n>>k;
    cout<<0%k<<endl;
    cout<<1%k<<endl;
    for(int i=0;i<n-2;i++){
        t=f+s;
        f=s;
        s=t;
        cout<<abs(t%k)<<endl;
    }
}
