#include<simplecpp>

main_program{
int n,m;
cin>>n>>m;
int f0=0,f1=1;
long int fn;
cout<<f0%m<<endl<<f1%m<<endl;
repeat(n-2){
fn=f0%m+f1%m;
cout<<fn%m<<endl;
f0=f1;
f1=fn%m;
}


}
