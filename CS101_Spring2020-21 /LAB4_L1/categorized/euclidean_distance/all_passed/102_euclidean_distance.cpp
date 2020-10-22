#include<simplecpp>
main_program{
   float queries,dimension,a,b,s=0;
    float k;
cin>>queries;
repeat(queries){cin>>dimension;
float s=0;
repeat(dimension){
cin>>a>>b;
s+=(a-b)*(a-b);}
k=sqrt(s);
printf("%.2f\n",k);
}
}
