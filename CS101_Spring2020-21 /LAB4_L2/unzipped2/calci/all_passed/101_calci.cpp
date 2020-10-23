#include<simplecpp>
main_program{
    int a;
    cin>>a;
    repeat(a){
    float p1,p2;
    char op;
    cin >> p1 >>op >> p2;
    switch(op){
    case'+':cout<<p1+p2<<endl;break;
    case'-':cout<<p1-p2<<endl;break;
    case'/':cout<<p1/p2<<endl;break;
    case'*':cout<<p1*p2<<endl;break;
    default:cout<<-1<<endl;break;
    }
}
}
