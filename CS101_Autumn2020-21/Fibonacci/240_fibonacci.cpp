#include<simplecpp>

main_program{
long long int f0=0, f1=1, k,n,t=1;
cin>>n>>k;
cout<<0<<endl<<1<<endl;
while(t<=(n-2)){
    if(t%2!=0) {f0=f0+f1;
    f0=f0%k;
    cout<<f0<<endl;}
    else {f1=f0+f1;
    f1=f1%k;
    cout<<f1<<endl;}
    t++;
}

}
