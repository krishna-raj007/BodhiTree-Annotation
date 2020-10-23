#include<simplecpp>
main_program{
int n;
cin >> n;
repeat(n){
float a,b;
char command;
cin>>a;
cin >> command >> b;
switch(command){
case '+': cout << a+b<<endl;
          break;
case '-': cout << a-b<<endl;
          break;

case '*': cout << a*b<<endl;
          break;

case '/': cout << a*1.0/b<<endl;
          break;
default: cout<<"-1"<<endl;

}
}
}
