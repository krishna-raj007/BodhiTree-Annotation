#include<simplecpp>;
main_program{
int a;
cin>>a;
repeat(a){
float n1,n2;
char op;
cin>>n1>>op>>n2;
switch(op){
case'+':cout<<n1+n2<<endl;break;
case'-':cout<<n1-n2<<endl;break;
case'*':cout<<n1*n2<<endl;break;
case'/':cout<<n1/n2<<endl;break;

default : cout<<-1<<endl;break;

}




}
























}
