#include<simplecpp>

main_program{
float x,y;
char op;
int n;
cin>>n;
repeat(n){
cin>>x>>op>>y;
switch(op){
case '+':cout<<x+y<<endl;break;
case '-':cout<<x-y<<endl;break;
case '*':cout<<x*y<<endl;break;
case '/':cout<<x/y<<endl;break;
default:cout<<-1<<endl;
}
}

}
