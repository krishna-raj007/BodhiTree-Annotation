#include<simplecpp>

main_program{
long long int p,k;
float r,s,n;
cin>>n>>k;
r=0;
s=1;
cout<<r<<endl;
cout<<s<<endl;
repeat(n-2){
p=r+s;
r=s;
s=p;
cout<<p%k<<endl;
}

}
