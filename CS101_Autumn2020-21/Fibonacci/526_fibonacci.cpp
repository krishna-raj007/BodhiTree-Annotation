#include<simplecpp>
main_program{

int n,k,x,y,p,q;
cin>>n>>k;
x=0;y=1;
repeat(n/2){
p=x%k; cout<<p<<endl;
q=y%k; cout<<q<<endl;
x += y;
y += x;
}
}
