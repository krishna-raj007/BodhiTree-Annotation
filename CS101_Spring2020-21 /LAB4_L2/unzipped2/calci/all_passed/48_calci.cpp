#include<simplecpp>
main_program
{
 int q;
 float Num1,Num2;
 char Operator;
 cin>>q;//enter no of queries
 repeat(q)
{

 cin>>Num1>>Operator>>Num2;//enter numbers and operator
 switch(Operator)
{
 case('+'):
 {
     cout<<Num1+Num2<<endl;
     break;
 }
 case('-'):
 {
     cout<<Num1-Num2<<endl;
     break;
 }
 case('*'):
 {
        cout<<Num1*Num2<<endl;
        break;
  }
 case('/'):
 {
 cout<<(Num1/Num2)<<endl;
 break;
    }

 default:
    {
        cout<<"-1"<<endl;
    }


}
}
}
