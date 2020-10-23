#include<simplecpp>

   main_program
   {
    int Q;
    cin>>Q;
    repeat(Q)
    {
        float Num1;
        float Num2;
        char Operator;
        cin>>Num1;
        cin>>Operator;
        cin>>Num2;

        switch(Operator)
        {
        case '+':
            cout<<Num1+Num2;
            break;

        case '-':
            cout<<Num1-Num2;
            break;

        case '*':
            cout<<Num1*Num2;
            break;

        case '/':
            cout<<Num1/Num2;
            break;

        default:
            cout<<"-1";
            break;
        }
        cout<<"\n";


    }
	//}Write your code here

   }
