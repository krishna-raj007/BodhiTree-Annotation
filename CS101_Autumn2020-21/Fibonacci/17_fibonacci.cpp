#include<simplecpp>

main_program{
long long unsigned int n,k,x1=0,x2=1,q;
cin>>n>>k;
cout<<endl;
cout<<"0"<<endl;
q=1%k;
cout<<q<<endl;
repeat(n-2){
long unsigned int x3;
x3=x1 + x2;
cout<<x3%k<<endl;
x1=x2%k;
x2=x3%k;
}
}
