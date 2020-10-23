#include<simplecpp>

main_program{
int n,a,b;cin>>n>>a>>b;
float s,q;
s=(a+b);
repeat (n-2){
int c;
cin>>c;
q=(b+c);
s=max(s,q);
b=c;
}
cout<<s<<endl;
}

