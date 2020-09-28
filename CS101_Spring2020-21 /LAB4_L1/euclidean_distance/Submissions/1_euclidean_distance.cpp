#include<simplecpp>

main_program{
float a,b,k=0;
int n,Q;
cin>>Q;
repeat(Q){
  cin>>n;
  k=0;
     repeat(n){
     cin>>a>>b;
     k=k+pow(a-b,2);

     }
   printf("%.2f\n",sqrt(k));

}



}
