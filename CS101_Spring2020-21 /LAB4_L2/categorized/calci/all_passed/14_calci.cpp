#include<simplecpp>
main_program{
int n;
cin>>n;
repeat(n){
    float a,b;
    char c;
    cin>>a>>c>>b;
    switch(c)
    {  case '+':cout<<a+b<<endl;break;
    case'*':cout<<a*b<<endl;break;
    case'-':cout<<a-b<<endl;break;
    case'/': cout<<a/b<<endl;break;
    default:cout<<-1<<endl;break;
    }
}
}










