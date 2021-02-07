#include<simplecpp>

main_program {
int n,k;
cin>>n>>k;
long long a = 0;
long long b = 1;
cout<<a<<endl;
if (n>=1){
cout<<b<<endl;
}
repeat (n-2){
long long c = a+b;
c=c%k;
a = b;
b = c;
cout<<c<<endl;
}




}


