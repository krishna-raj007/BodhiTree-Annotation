#include<simplecpp>

main_program{
int q;
cin>>q;
repeat(q){
int n;
float result=0;
cin>>n;
repeat(n){
float a,b;
cin>>a>>b;
float d=a-b;
float c=pow(d,2);
result+=c;

}
float final=sqrt(result);
printf("%.2f\n",final);
}

}
