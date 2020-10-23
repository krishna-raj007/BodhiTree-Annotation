#include<simplecpp>

main_program{
int i=1,n;
double p=1,q,s;
cin>>n;
repeat(n){
q=1/2*i+1;
if (i%2==0) {
s=p-q;
}
else
s=p+q;
i++;
}
cout<<4*s;
}
