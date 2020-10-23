#include<simplecpp>

main_program{
char operation;
float a,b,n;
repeat(n){
cin>>a>>operation>>b;
switch(operation){
case '+' :{cout<<a+b;}
case '*' :{;cout<<a*b;}
case '-' :{;cout<<a-b;}
case '/' :{;cout<<a/b;}
default : cout<<-1;
}
}
}


