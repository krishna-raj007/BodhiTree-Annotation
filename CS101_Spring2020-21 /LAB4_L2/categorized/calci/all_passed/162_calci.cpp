#include <simplecpp>
main_program
{
int n;cin >>n;
repeat(n)
{
float num1,num2;
char oper;
cin>>num1>>oper>>num2;
switch(oper)
{
case '+':
    {

double sum=num1+num2;
cout<<sum<<endl;
    }
break;
case '-':{
double diff=num1-num2;
cout<<diff<<endl;
break;}
case '*':{
double mly=num1*num2;
cout<<mly<<endl;
break;}
case '/':{
double div=num1/num2;
cout<<div<<endl;
break;}
default:{
cout <<"-1"<<endl;
break;}

}


}
}
