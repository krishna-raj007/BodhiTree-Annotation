#include<simplecpp>

main_program{
int p;
cin>>p;
repeat(p){
float n1,n2;
char opr;
cin>>n1>>opr>>n2;
switch(opr){
case'+':cout<<n1+n2<<endl;break;
case'-':cout<<n1-n2<<endl;break;
case'*':cout<<n1*n2<<endl;break;
case'/':cout<<n1/n2<<endl;break;
default:cout<<-1<<endl;break;
}
}




}
