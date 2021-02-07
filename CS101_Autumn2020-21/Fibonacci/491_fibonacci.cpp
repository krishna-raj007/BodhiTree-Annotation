#include<simplecpp>
main_program{
    long long int n,k;
    cin>>n>>k;
     long long int F0=0,F1=1,F2=1,F;
    cout<<F0<<endl;
    cout<<F1%k<<endl;
    cout<<F2%k<<endl;
    for(int i=0; i<n-3;i++)
        {F=F1+F2;
        cout<<F%k<<endl;
         long long int F1next=F2;
         long long int F2next=F;
        F1=F1next;
        F2=F2next;}
        }
