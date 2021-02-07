#include<simplecpp>
main_program{
int a=0,b=1,c,d,e;
cin>>d>>e;
if(d==1){
cout<<"0"<<endl;
}
if (d==2){
cout<<"0"<<endl;
cout<<b%e<<endl;
}
if (d>=3){
cout<<"0"<<endl;
cout<<b%e<<endl;
}
repeat(d-2){
c=a+b;
cout<<c%e<<endl;
a=b%e;
b=c%e;}
}
