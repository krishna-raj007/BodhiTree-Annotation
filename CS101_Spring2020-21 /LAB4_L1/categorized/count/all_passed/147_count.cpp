#include<simplecpp>

main_program{
int Q,count=0;
cin>>Q;
for(int i=1;i<=Q;i++){
int A,w,e,r,t,y;
cin>>A;
w=A%2;
e=A%3;
r=A%5;
t=A%7;
y=A%11;
switch(w){
case 0 : count=count+1;}
switch(e){
case 0 : count=count+1;}
switch(r){
case 0 : count=count+1;}
switch(t){
case 0 : count=count+1;}
switch(y){
case 0 : count=count+1;}
cout<<count<<endl;
count=0;
}
}
