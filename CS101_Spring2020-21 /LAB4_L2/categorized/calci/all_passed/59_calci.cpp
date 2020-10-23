#include<simplecpp>
main_program
{
    int Q;
    cin>>Q;
    float num1,num2,s;
    char opert;
    repeat(Q)
    {
        cin>>num1>>opert>>num2;
        switch(opert)
        {
            case '+':s=num1+num2;
            cout<<s<<endl;
            break;
            case '-':s=num1-num2;
            cout<<s<<endl;
            break;
            case '*':s=num1*num2;
            cout<<s<<endl;
            break;
            case '/':s=num1/num2;
            cout<<s<<endl;
            break;
            default: cout<<"-1"<<endl;
        }



    }
}
