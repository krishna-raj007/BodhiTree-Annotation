#include<simplecpp>

main_program{

float a ,b,d, sum;
int m,n;
cin>>m;


    repeat(m){
        d=0,sum=0;
        cin>>n;
        repeat(n){
            cin>>a>>b;
            d=(a-b)*(a-b);
            sum=sum+d;

        }
        printf("%.2f\n", sqrt(sum));
    }
}




