#include<simplecpp>

main_program{
long long int k,n,c;
cin>>n>>k;
long int a=0,b=1;
repeat(n){
cout<<a<<endl;
c=a;
a=b;
b=(c+a)%k;

}

}

