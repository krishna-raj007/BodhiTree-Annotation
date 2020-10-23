#include<simplecpp>

main_program{
    double n,a,r,t,i=0,sum=0;
    cin>>n;
    repeat(n+1){
        r=2*i+1;
        t=1/r;
        sum=sum+ pow(-1,i)*t;
        i++;

    }

cout<<4*sum;

}
