#include<simplecpp>

main_program{
long int n,i=0,r,c=1;
cin>>n>>r;
repeat(n){

    i=i+1;
    c=((i%r)*(c))%r;
    }
cout<<c;



}
