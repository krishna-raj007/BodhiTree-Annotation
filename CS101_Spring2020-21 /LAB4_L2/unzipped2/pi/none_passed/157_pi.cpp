#include<simplecpp>
main_program{
    int n;
    int even=0,d=1;
    double sum=1;
    cin>>n;
    while(d<=2*n+1)
    if(even=1){
        sum=sum - (1/d);
        even=0;
        d=d++;
        continue;}
        else if (even=0){
            sum=sum + (1/d);
            even=1;
            d=d++;}
    }
