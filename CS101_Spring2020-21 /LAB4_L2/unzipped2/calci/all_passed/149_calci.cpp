#include<simplecpp>

main_program{
   int q;
   cin>>q;
   repeat(q){
   float a,b;
   char op;
   cin>> a >> op >>b;
   switch(op){
   case '+' :
       cout<< a + b << endl;
       break;
    case '-' :
       cout<< a - b << endl;
       break;
    case '*' :
       cout<< a * b << endl;
       break;
    case '/' :
       cout<< a / b << endl;
       break;
    default : cout<<-1 << endl;
    break;
       }
}
}
