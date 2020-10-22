#include<simplecpp>
main_program{
  float N,Q,a,b,s,S;
  cin>>Q;
  repeat(Q){
    cin>>N;
    s=0;
    repeat(N){
      cin>>a>>b;
      s=s+pow(abs(a-b),2);
      }
    S=sqrt(s);
    printf("%.2f\n",S);
  }
}
