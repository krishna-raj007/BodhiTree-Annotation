#include<simplecpp>

main_program{
int n;
long long int m,a,k,s,p;
cin>>n;
s=0;
p=0;
k=0;
repeat(n){
    cin>>a;
    s=a+p;
    p=a;
    m=max(s,k);
    k=m;
}
cout<<m;

}
