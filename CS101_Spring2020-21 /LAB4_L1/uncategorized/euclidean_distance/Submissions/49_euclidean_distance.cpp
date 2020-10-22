#include<simplecpp>
main_program{
    int m,n;
    float a,b,c,sum=0;
    cin>>m;
    float u;
    repeat(m){
        sum=0;
        cin>>n;
    repeat(n){

    cin>>a>>b;
    c=pow((a-b),2);
    sum=sum+c;
    }
    u=sqrt(sum);
    printf("%.2f\n",u);
    }




}
