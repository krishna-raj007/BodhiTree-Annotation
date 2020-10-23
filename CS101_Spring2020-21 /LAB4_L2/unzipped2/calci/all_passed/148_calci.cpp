#include<simplecpp>

main_program
{
    int Q;
    char a;
    float num1, num2;
    cin>>Q;
    repeat(Q)
    {
        cin>>num1>>a>>num2;
        switch(a)
        {
        case  '+':
            cout<<num1+num2<<endl;
            break;
        case  '-':
            cout<<num1-num2<<endl;
            break;
        case  '/':
            cout<<num1/num2<<endl;
            break;
        case  '*':
            cout<<num1*num2<<endl;
            break;
        default:
            cout<<"-1"<<endl;
        }
    }

}
