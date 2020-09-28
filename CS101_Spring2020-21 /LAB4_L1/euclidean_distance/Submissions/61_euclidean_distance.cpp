#include<simplecpp>
main_program{
int n,dim;
float m,a,b,val,fin;
cin>>n;
repeat(n){
val=0;
cin>>dim;
repeat(dim){
cin>>a>>b;
val=val +(a-b)*(a-b);
}
fin=sqrt(val);
printf("%.2f\n",fin);
}
}
