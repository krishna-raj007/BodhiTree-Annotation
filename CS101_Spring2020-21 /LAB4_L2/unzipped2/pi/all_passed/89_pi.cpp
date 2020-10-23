#include<simplecpp>
main_program
{
    float n,b=0,a;
    cin>>n;
    float sum=0;

    dotimes(n+1){
    a=pow(-1,b)/(2*b+1);
    sum=sum+a;
    b=b+1;

    }
    cout<<4*sum;
}

