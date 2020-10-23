#include<simplecpp>

main_program{
int q;
float num1, num2, result;
char Operator;
cin>>q;
repeat(q){
  cin>>num1>>Operator>>num2;
  switch(Operator)
  {
    case('+'):
    {
      result = num1 + num2;
      cout<<result<<endl;
      break;
    }
    case('-'):
    {
      result = num1 - num2;
      cout<<result<<endl;
      break;
    }
    case('*'):
    {
      result = num1*num2;
      cout<<result<<endl;
      break;
    }
    case('/'):
    {
      result = num1/num2;
      cout<<result<<endl;
      break;
    }
    default:
    {
        cout<<"-1"<<endl;
    }
  }
  }
}
