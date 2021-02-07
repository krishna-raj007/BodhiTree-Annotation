#include<simplecpp>
main_program{
int n, k;
int f1, f2,f3;
    f1=0; f2=1;
    cin>>n>>k;
    for(int i=0; i<n; i++) {
    cout<<(f1%k)<<endl;
    f3=f1+f2;
    f1=f2;
    f2=f3;
    }
    }
