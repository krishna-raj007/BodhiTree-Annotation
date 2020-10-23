#include<simplecpp>
main_program{
   int n;
   cin>>n;

   repeat(n)
   {    float res;
   float num1,num2;char op;
   cin>>num1;cout<<" ";cin>>op;cout<<" ";cin>>num2;
       switch(op)
       {   case '+': res=num1+num2;break;
           case '-': res=num1-num2;break;
           case '*': res=num1*num2;break;
           case '/': res=num1/num2;break;
           default : res=-1;


       }
       cout<<res;
   }
}
