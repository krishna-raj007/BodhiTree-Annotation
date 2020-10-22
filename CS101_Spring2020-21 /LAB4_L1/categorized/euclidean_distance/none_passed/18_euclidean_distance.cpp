#include<simplecpp>

main_program{
long int Q, n;
float c=0, d=0;
double a, b;
cin>>Q;
repeat(Q){
cin>>n;
repeat(n){
cin>>a>>b;
c+=((a-b)*(a-b));
}
d=sqrt(c);
printf("%.2f\n", d);

}	//Write your code here

}
