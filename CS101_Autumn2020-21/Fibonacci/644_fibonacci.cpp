#include<simplecpp>

main_program{
long int n,k;
cin>>n>>k;
long int s,x,y;
cout<<0<<endl<<1<<endl;

x=0;
y=1;
repeat(n-2){
    s=x%k+y%k;
    cout<<s%k<<endl;
    x=y;
    y=s;

}

}
