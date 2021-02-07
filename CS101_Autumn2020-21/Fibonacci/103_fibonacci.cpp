#include<simplecpp>

main_program{
int n,k;
long long int a,b,F;
cin>>n>>k;
a=0;
b=1;
cout<<a<<endl;
cout<<b<<endl;
repeat(n-2){
        cout<<(a+b)%k<<endl;
        F=(a+b);
        a=b;
        b=F;
        }
}
