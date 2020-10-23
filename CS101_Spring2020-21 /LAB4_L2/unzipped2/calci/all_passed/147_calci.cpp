#include<simplecpp>

main_program{
int q,num1,num2;
char x;
cin>>q;
repeat(q){
cin>>num1>>x>>num2;
switch (x){
case '+': cout<<num1+num2<<endl;
        break;
case '-': cout<<num1-num2<<endl;
        break;
case '*': cout<<num1*num2<<endl;
        break;
case '/': cout<<num1/num2<<endl;
        break;
default: cout<<"-1"<<endl;

}

}

}
