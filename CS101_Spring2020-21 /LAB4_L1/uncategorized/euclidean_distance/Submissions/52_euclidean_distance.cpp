#include<simplecpp>

main_program{
int q;
cin>>q;
repeat(q){
double n,c=0;
cin>>n;
repeat(n){
float a,b;
cin>>a>>b;
c=c+pow(abs(a-b),2);
}
printf("%.2f\n",sqrt(c));
cout<<endl;

}
}
