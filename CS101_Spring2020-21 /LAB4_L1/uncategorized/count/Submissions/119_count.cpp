#include<simplecpp>

main_program{

int q,n,c=0;
cin>>q;
repeat(q){
cin>>n;

if(n%2==0){
    c++;
}

if(n%3==0){
    c++;
}


if(n%5==0){
    c++;
}


if(n%7==0){
    c++;
}


if(n%11==0){
    c++;
}

cout<<c;
cout<<endl;
}


}
