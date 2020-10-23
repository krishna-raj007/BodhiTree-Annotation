#include<simplecpp>
main_program{
int n,i=1;
double pi=1.0,q;
cin>>n;
repeat(n){
q=1.0/(2*i+1);
if(i%2==0){
pi=pi+q;
}
else
{
 pi=pi-q;
}
i=i+1;
}
cout<<pi*4;
}
