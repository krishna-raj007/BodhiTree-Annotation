#include<simplecpp>
main_program{
int a,b;
cin>>a;
float a_i,b_i,r,y;
repeat(a){
cin>>b;
for(int i=1;i<=b;i++){
    cin>>a_i >>b_i;
    y=y+pow(a_i-b_i,2);}
    r=sqrt(y);
    printf("%.2f\n",r);
}
}
