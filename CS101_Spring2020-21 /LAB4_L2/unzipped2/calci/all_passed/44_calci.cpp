#include<simplecpp>
#include<iostream>

main_program{

int Q;

float NUM1,NUM2,answer;

char op;

cin>>Q;

repeat(Q)
{


cin>>NUM1>>op>>NUM2;

if( op =='+'|| op =='-'|| op == '*' || op =='/')
{

 switch (op)
 {
     case '+': answer = NUM1 + NUM2;
               break;

     case '-': answer = NUM1 - NUM2;
               break;

     case '*': answer = NUM1 * NUM2;
               break;

     case '/': answer = NUM1 / NUM2;
               break;


}

cout<<answer<<endl;

}

else cout<<"-1"<<endl;

}





























}
