#include<simplecpp>
main_program{
int n;
float a,b,r;
cin>>n;
char operation;
repeat(n){
cin>>a;
cin>>operation;
cin>>b;
switch(operation){
case '/' :
r=a/b;
cout<<r<<endl;
break;
case '*' :
r=a*b;
cout<<r<<endl;
break;
case '+' :
r=a+b;
cout<<r<<endl;
break;
case '-' :
r=a-b;
cout<<r<<endl;
break;
default:
cout<< -1<<endl;
}
}
}
