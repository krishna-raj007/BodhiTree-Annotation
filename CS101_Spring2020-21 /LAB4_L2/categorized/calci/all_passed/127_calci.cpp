#include<simplecpp>
main_program{
float n,a,b,r;
char o;
cin>>n;
repeat(n){
    cin>>a>>o>>b;
    switch(o){
    case '+':r=a+b;
        cout<<r<<endl;
        break;
    case '-':r=a-b;
        cout<<r<<endl;
        break;
    case '*':r=a*b;
        cout<<r<<endl;
        break;
    case '/':r=a/b;
        cout<<r<<endl;
        break;
    default: cout<<"-1"<<endl;
      }
    }
}
