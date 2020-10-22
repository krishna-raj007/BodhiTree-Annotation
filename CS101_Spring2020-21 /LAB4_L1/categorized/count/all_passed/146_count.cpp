#include<simplecpp>

main_program{
int Q,P;
cin>>Q;

for(int i=1;i<=Q;i++){
cin>>P;
int x=0;
if(P%2==0)
x=x+1;
if(P%3==0)
x=x+1;
if(P%5==0)
x=x+1;
if(P%7==0)
x=x+1;
if(P%11==0)
x=x+1;

cout<<x<<endl;

}
}
