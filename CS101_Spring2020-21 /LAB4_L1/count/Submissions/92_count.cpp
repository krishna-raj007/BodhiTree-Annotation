#include<simplecpp>

main_program{
    int n,count,p;

    cin>>p;
    repeat(p){cin>>n;
    count=0;
    if(n%2==0)count=count+1;
    if(n%3==0)count=count+1;
    if(n%5==0)count=count+1;
    if(n%7==0)count=count+1;
    if(n%11==0)count=count+1;
    cout<<count<<endl;}


}

