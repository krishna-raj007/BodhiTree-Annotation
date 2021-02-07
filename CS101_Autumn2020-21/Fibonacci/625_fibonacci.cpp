#include<simplecpp>

main_program{
long int n,k,fn;
long int f1=0;
long int f2=1;
cin>>n>>k;
repeat(n){
cout<<f1%k<<endl;
fn=(f1+f2)%k;
f1=f2%k;
f2=fn%k;
}

}
