#include<simplecpp>

main_program{
int n,a,divisor,i=0,p;
cin>>n;
repeat(n){

cin>>a;
switch(divisor){
case 2:p=a%2;

    if(p=0) {
        i=i+1;
    }
    else{break;}

case 3:p=a%3;
if(p=0) {
        i=i+1;
    }
    else{break;}


case 5 :p=a%5;
if(p=0) {
        i=i+1;
    }
    else{break;}

case 7 :p=a%7;
if(p=0) {
        i=i+1;
    }
    else{break;}


case 11:p=a%11;
if(p=0) {
        i=i+1;
    }
    else{break;}

}
cout<<i<<endl;
}
}
