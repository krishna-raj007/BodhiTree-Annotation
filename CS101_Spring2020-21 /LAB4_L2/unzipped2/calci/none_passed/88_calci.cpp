#include<simplecpp>
main_program
{
    float n,a,b;
    cin>>n;
    char c;
    dotimes(n){
    cin>>a>>c>>b;
    switch(c){
    case '+': cout<<(a+b);
    break;
    case '-': cout<<(a-b);
    break;
    case '*': cout<<(a*b);
    break;
    case '/': cout<<(a/b);
    break;
    default:cout<<"-1";
    }
    }

}
