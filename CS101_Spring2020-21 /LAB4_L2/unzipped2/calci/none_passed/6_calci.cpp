#include<simplecpp>
main_program
{
    int q;
    char op;
    float i,j,ans;
    cin>>q;
    repeat(q)
    {
        cin>>i>>op>>j;
        switch(op)
        {
        case '+':
            cout<<i+j;
            break;
        case '-':
            cout<<i-j;
            break;
        case '*':
            cout<<i*j;
            break;
        case '/':
        {
            ans=i/j;
            cout<<ans;
            break;
        }
        }
    }
}
