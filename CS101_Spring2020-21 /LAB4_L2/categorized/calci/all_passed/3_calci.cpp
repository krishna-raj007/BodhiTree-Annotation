#include<simplecpp>

main_program{
int q=1;
cin>>q;
float n1=0.0;
float n2=0.0;
int b=32;
char op =b;
for(int i=1;i<=q;i++)
{ cin>>n1>>op>>n2;
switch(op)
{ case '+':cout<<(n1+n2)<<endl;
break;
case '-':cout<<(n1-n2)<<endl;
break;
case '/':cout<<(n1/n2)<<endl;
break;
case '*':cout<<(n1*n2)<<endl;
break;
default :cout<<"-1"<<endl;
}
}
}
