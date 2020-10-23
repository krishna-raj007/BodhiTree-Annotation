#include<simplecpp>

main_program{

int n;
cin>>n;
double s=0,t,k=1,i=1;
repeat(n+1){
t=4*i/k;
s+=t;
i=-i;
k=k+2;

}cout<<s;



}
