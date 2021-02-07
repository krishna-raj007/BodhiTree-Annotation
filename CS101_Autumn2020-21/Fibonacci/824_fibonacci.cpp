#include<simplecpp>

main_program{int n,k;cin>>n>>k;
    int a=0,b=1,i,c;cout<<a<<endl;if(n>1)cout<<b<<endl;
    for(i=2;i<n;i++){c=(a%k)+(b%k);if(c<k)cout<<c<<endl;
    else{c=c-k;cout<<c<<endl;}a=b;b=c;}



}
