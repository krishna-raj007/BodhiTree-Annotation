#include<simplecpp>

main_program{
int n,m,a,b;
cin>>n;
repeat(n){
cin>>m;
float euclidean_distance=0.0;
repeat(m){
float a,b;
cin>>a>>b;
euclidean_distance=euclidean_distance+ pow((a-b),2);
}
double ans=sqrt(euclidean_distance);
printf("%2f/n",ans); }
}
