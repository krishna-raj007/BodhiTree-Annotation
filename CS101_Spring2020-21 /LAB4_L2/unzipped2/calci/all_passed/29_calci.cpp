#include<simplecpp>

main_program{

   int Q;
   float Num1 ,Num2;
   char choice;
   cin>>Q;
repeat(Q){
      cin>>Num1>>choice>>Num2;
      switch(choice){
      case '+':
      cout<<Num1+Num2<<endl;
      break;
      case '-':
      cout<<Num1-Num2<<endl;
      break;
      case '*':
      cout<<Num1*Num2<<endl;
      break;
      case '/':
      cout<<Num1/Num2<<endl;
      break;
      default:
          cout<<"-1"<<endl;
          break;
          }
    }
    }
