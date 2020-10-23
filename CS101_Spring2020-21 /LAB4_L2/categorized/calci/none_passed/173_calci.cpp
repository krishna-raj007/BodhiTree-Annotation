#include<simplecpp>

main_program
{
    float q,n,a,c,b;
    cin>>a>>b;

    char k;
    switch(k)
    {
    case '+':
        c=a+b;
        break;
    case '-':
        c=a-b;
        break;
    case '*':
        c=a*b;
        break;
    case '/':
        c=a/b;
        break;
    default:
        -1;
    }
cout<<c<<endl;
}

