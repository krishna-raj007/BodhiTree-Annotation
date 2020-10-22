#include<simplecpp>

main_program{long
int Q, a ,b;
cin>>Q;
repeat(Q){
cin>>a;
if(a%2==0){
b=1;
}
else{b=0;}
if(a%3==0){
b=b+1;}
else{b=b;
}
if(a%7==0){
b=b+1;}
else{b=b;}
if(a%11==0){
b=b+1;}
else{b=b;
}
cout<<b;
}


}
