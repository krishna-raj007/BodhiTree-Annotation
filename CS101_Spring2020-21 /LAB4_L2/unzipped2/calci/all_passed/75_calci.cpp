#include<simplecpp>

main_program{

int n;
cin>>n;
float num1;
float num2;
char op;
repeat(n){
cin>>num1>>op>>num2;
switch(op){
int ans;
case '+' :
ans=num1+num2;
cout<<ans<<endl;
break;
case '-' :
ans=num1-num2;
cout<<ans<<endl;
break;
case '*' :
ans=num1*num2;
cout<<ans<<endl;
break;
case '/' :
ans=num1/num2;
cout<<ans<<endl;
break;
default:
cout<<-1<<endl;
break;
}
}

}
