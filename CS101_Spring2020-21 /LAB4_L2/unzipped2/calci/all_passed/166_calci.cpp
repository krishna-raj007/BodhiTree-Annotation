#include<simplecpp>

main_program{

int q;
cin>>q;
float num1,num2;
char op;
float val[q-1];

for(int i=0;i<q;i++)
{
cin>>num1;
cin>>op;
cin>>num2;
switch(op)
{
case '+':
val[i]=num1+num2;
break;
case '-':
val[i]=num1-num2;
break;
case '*':
val[i]=num1*num2;
break;
case '/':
if(num2==0)
{val[i]=-1;
    break;}
else
val[i]=num1/num2;
break;
default:
val[i]=-1;
break;
}
}
for(int k=0;k<q;k++)
cout<<val[k]<<endl;

}

