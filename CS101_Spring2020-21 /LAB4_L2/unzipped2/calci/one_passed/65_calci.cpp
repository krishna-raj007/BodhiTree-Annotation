#include<simplecpp>

main_program{
char operation;
float a,b,n;
cin>>n;
repeat(n){
cin>>a>>operation>>b;
switch(operation){
case '+' :{cout<<a+b<<endl;break;}
case '*':{cout<<a*b<<endl;break;}
case '-' :{cout<<a-b<<endl;break;}
case '/' :{cout<<a/b<<endl;break;}

default : cout<<-1;


}





}



}
