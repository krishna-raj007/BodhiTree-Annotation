#include<simplecpp>

main_program{

float a,b,dist=0;
int q,n;
cin>>q;
repeat(q){
  cin>>n;
  dist=0;
  repeat(n){
    cin>>a>>b;
    dist=dist+(a-b)*(a-b);
  }
  dist=sqrt(dist);
printf("%.2f\n",dist);
}
}
