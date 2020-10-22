#include<simplecpp>

main_program{
int q,n;
float k=0,i,a,b;
cin>>q>>n;
repeat(q){
repeat(n){
cin>>a>>b;
i=pow((a-b),2);
k=k+i;
}
k=sqrt(k);
cout<<k;
}
}
