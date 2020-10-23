#include<simplecpp>

main_program{
int n;
cin>>n;
char op;
float y,p,t;
repeat(n){
cin>>y>>op>>p;
switch(op){
case'*': t=y*p;
cout<<t<<endl;
break;
case'+': t=y+p;
cout<<t<<endl;
break;
case'-': t=y-p;
cout<<t<<endl;
break;
case'/': t=y/p;
cout<<t<<endl;
break;
default: cout<<-1<<endl;
}
}


}
