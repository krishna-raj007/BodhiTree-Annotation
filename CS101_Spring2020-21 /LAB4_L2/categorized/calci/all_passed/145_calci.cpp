#include<simplecpp>

main_program{
int n,a,c,d;
char b;
cin>>n;
repeat(n){
cin>>a>>b>>c;
if(b=='+'){
d=a+c;
cout<<d<<endl;
}else if(b=='*'){
d=a*c;
cout<<d<<endl;
}else if(b=='-'){
d=a-c;
cout<<d<<endl;
}else if(b=='/'){
d=a/c;
cout<<d<<endl;}
else{
    cout<<-1<<endl;
}
}}
