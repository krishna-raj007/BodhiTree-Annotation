#include<simplecpp>
main_program
{

    int n;
    char comm;
    float n1,n2;
    cin>>n>>comm>>n1>>n2;
    switch(comm)
    {
        case '+':cout<<n1+n2<<cout;
        break;
        case '-':cout<<n1-n2<<endl;
        break;
        case '*':cout<<n1*n2;
        break;
        case '/':cout<<n1/n2;
        break;
        default:cout<<"-1"<<endl;
    }
}
