#include<simplecpp>

main_program{

int q,n;
float a,b,dist;
cin>>q;
repeat(q)
{dist=0;
 cin>>n;
 repeat(n)
 {
  cin>>a>>b;
  dist=sqrt(dist*dist+(a-b)*(a-b));
 }
printf("%.2f\n",dist);
}


}
