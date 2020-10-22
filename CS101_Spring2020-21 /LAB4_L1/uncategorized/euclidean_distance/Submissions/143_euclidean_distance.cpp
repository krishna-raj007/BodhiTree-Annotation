#include<simplecpp>
main_program{
  int n,m;
  float a1,b1,sum=0,dist;
  cin>>n;
  repeat(n){
   cin>>m;
    repeat(m){
     cin>>a1>>b1;
     sum=sum+pow((a1-b1),2);}

  dist=sqrt(sum);
  sum=0;
  printf("%.2f\n",dist);
}
}
