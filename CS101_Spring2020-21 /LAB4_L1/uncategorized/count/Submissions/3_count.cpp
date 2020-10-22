#include<simplecpp>
main_program{int a,b;
cin>>a;
for(int i=1;i<=a;i++){
    cin>>b;
    int x=0;

    if(b%2==0)
        x=x+1;
    if(b%3==0)
    x=x+1;
    if(b%5==0)
    x=x+1;
    if(b%7==0)
    x=x+1;
    if(b%11==0)
    x=x+1;
    cout<<x<<endl;}
}

