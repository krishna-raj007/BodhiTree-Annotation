#include<simplecpp>
main_program{
int n ;
cin>>n;
repeat(n){
float a,b ;
char operation ;
cin>>a>>operation>>b;
switch(operation){
case '+' : cout<<a+b<<endl;
break;
case '*' : cout<<a*b<<endl;
break;
case '-' : cout<<a-b<<endl;
break;
case '/' : cout<<a/b<<endl;
break;
default : cout<<-1<<endl;
break;
}
}
}



