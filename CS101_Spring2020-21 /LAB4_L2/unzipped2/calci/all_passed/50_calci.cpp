#include<simplecpp>
main_program{
int n=0;
float a,b;
cin>>n;
char ch;
repeat(n)
{
cin>>a>>ch>>b;
switch(ch)
{
 case '+':cout<<(a+b)<<endl;break;
 case '-':cout<<(a-b)<<endl;break;
 case '*':cout<<(a*b)<<endl;break;
 case '/':cout<<(a/b)<<endl;break;
 default:cout<<-1<<endl;
}

}


}
