#include<simplecpp>

main_program{
    int q;
    float a,b;
    cin>>q;
    char c;
    repeat(q)
    {
        cin>>a>>c>>b;
        switch (c)
        {
           case '+':
           cout<<a+b<<endl;
           break;
           case '*':
           cout<<a*b<<endl;
           break;
           case '/':
           cout<<a/b<<endl;
           break;
           case '-':
           cout<<a-b<<endl;
           break;
           default:
           cout<<-1<<endl;
           break;
        }
    }
}
