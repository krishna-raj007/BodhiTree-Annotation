#include<simplecpp>

main_program{
    int Q;
    cin>>Q;
  repeat(Q){
   double a,b;
    char d;
cin>>a;  cin>>d;  cin>>b; cout<<"\n";



switch(d)
{
case '+' : cout<<a+b;
break;
case '-'  : cout<<a-b;
break;
case '*'  : cout<<a*b;
break;
case '/' : cout<<a/b;
break;
}

  }
}



