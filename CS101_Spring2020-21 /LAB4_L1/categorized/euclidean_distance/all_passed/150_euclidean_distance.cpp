#include<simplecpp>

main_program{
  float a,b;
  int q,n;
  cin>>q;
  repeat(q){
        float ans=0;
        cin>>n;
        repeat(n){
        cin>>a>>b;
        ans=ans+(a-b)*(a-b);
        }

  printf("%.2f\n",sqrt(ans));


  }

}
