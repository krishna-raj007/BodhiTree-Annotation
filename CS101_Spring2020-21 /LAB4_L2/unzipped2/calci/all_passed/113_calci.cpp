#include<simplecpp>

main_program
{
    int q;
    cin>>q;
    float num1,num2;
    char op;

    repeat(q)
    {
        cin>> num1>>op>>num2;
        if (op == '+')
        {
            cout << num1+num2 << endl;
        }
        else if(op== '-')
        {
            cout << num1-num2 << endl;
        }
        else if (op=='/')
        {
            cout << num1/num2 << endl;
        }
        else if (op=='*')
        {
            cout << num1*num2 << endl;
        }
        else cout << "-1" << endl;
    }




}
