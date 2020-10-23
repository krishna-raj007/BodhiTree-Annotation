#include<simplecpp>

main_program{

float a,b,n;
char op;

cin>>n;

repeat(n){
 cin>>a>>op>>b;

 switch(op){
  case '+': cout<<a+b<<endl; break;
  case '-': cout<<a-b<<endl; break;
  case '/': cout<<a/b<<endl; break;
  case '*':  cout<<a*b<<endl; break;
 }

 if( op !='+' && op !='-' && op !='*' && op !='/') cout<<"-1"<<endl;
 }

}
