#include<simplecpp>

main_program
{
    int n;
    char c;
    float a,b;
    cin >> n;
        repeat(n)
        {
        cin >>a>>c>>b;
            switch(c){
            case '+':cout <<a+b;
            break;
            case '-':cout<<a-b;
            break;
            case '*':cout <<a*b;
            break;
            case '/':cout <<a/b;
            break;
            default: cout <<"-1"<<endl;
            }
        }
}
