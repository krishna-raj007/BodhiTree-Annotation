#include<simplecpp>

main_program{
    int a,b;
float c,d,sum;
cin>>a;
repeat(a){
    sum=0;
    cin>>b;
    repeat(b){
    cin>>c>>d;
    sum=sum+(c-d)*(c-d);
    }
      sum=sqrt(sum);
      printf("%.2f\n",sum);

       }
}
