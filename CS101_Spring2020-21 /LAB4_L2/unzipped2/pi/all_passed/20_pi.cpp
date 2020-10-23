#include<simplecpp>

main_program{
    int n,i;
    double x,y=0;
    cin>>n;

    for(i=0;i<=n;i++){
        x=pow(-1,i)/(2*i+1);
        y=x+y;
    }
    cout<<4*y;
    }
