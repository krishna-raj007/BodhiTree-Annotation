#include<simplecpp>

main_program{
int Q, count=0;
cin>>Q;
repeat(Q){
    count=0;
int A,p,q,r,s,t;
cin>>A;
p=A%2;
q=A%3;
r=A%5;
s=A%7;
t=A%11;

switch(p){
      case 0 : count++;
      }
switch(q){
     case 0 : count++;
     }

switch(r){
     case 0 : count++;
     }
switch(s){
     case 0 : count++;
     }
switch(t){
     case 0 : count++;
     }

cout<<count<<endl;
}




     }
