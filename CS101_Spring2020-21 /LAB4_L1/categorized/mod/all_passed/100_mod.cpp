#include<simplecpp>
main_program{
long int n,m,p=1,s=1;
cin>>n>>m;
repeat(n){
    s*=p;
    s%=m;
    p++;
    }
    cout<<s%m;
}


