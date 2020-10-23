#include<simplecpp>

main_program{

int n;
cin>>n;
repeat(n){
float num1,num2,ans;
char operation;
cin>>num1>>operation>>num2;
if(operation=='+') ans=num1+num2;
if(operation=='-') ans=num1-num2;
if(operation=='*') ans=num1*num2;
if(operation=='/') ans=num1/num2;
cout<<ans<<endl;
}

}
