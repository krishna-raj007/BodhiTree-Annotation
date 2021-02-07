#include <simplecpp>

main_program{
int n,k,s=0,a=0,b=1;
cin>>n>>k;
cout<<a<<endl<<b<<endl;
for(int i=1;i<=n-2;i++){
s=a+b;
cout<<s%k<<endl;
a=b;
b=s%k;


}
}
