#include<simplecpp>

main_program
{
    int Q,p;
    char command;
    float num1,num2;

    cin>>Q;
    repeat(Q)
    {

        cin>>num1>> command>>num2;
        switch(command)
        {
        case '+':
            p = num1 + num2;
            cout<< p;
            break;

        case '*' :
            p= num1*num2;
           cout<<p;
            break;

        case '-':
            p = num1 - num2;
            cout<<p;
            break;

        case '/':
            p = num1/num2;
            cout<<p ;
            break ;
        default :
            cout<< -1<< endl;

        }
        cout<<"\n";
    }
}
