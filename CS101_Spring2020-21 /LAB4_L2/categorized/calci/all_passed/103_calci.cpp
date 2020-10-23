#include<simplecpp>

main_program{
  int q;
  float a,b;
  char c;
  cin>>q;
  repeat(q){
    cin>>a;
    cin>>c;
    cin>>b;
    switch(c){
      case '+':
        cout<<a+b<<endl;
        break;

      case '-':
        cout<<a-b<<endl;
        break;

      case '*':
        cout<<a*b<<endl;
        break;

      case '/':
        cout<<a/b<<endl;
        break;

      default:
        cout<<-1<<endl;

    }
  }
}
