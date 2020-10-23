#include<simplecpp>

main_program{
int n,nth=0,i;
double sum=0;
cin>>n;
sum=4;
nth++;
repeat(n)
{
    double temp;
    i=pow(-1,nth);

    temp=2*nth+1;
    temp=1/temp;

    sum=sum+4*i*temp;
    nth++;
}
cout<<sum;


}

