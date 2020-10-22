#include<simplecpp>

main_program{
int q;
cin>>q;
for(int i=1;i<=q;i++){
int a,b=0;
cin>>a;
for(int j=1;j<=5;j++){
switch(j){
case 1:
    if(a%2==0){
        b+=1;
    }
    break;
case 2:
    if(a%3==0){
        b+=1;
    }
    break;
case 3:
    if(a%5==0){
        b+=1;
    }
    break;
case 4:
    if(a%7==0){
        b+=1;
    }
    break;
case 5:
    if(a%11==0){
        b+=1;
    }
    break;
default :
    b+=0;
}
}
cout<<b<<endl;

}

}
