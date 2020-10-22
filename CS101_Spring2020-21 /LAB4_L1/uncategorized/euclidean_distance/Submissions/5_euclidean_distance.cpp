#include<simplecpp>

main_program{
float n,m,A,B,C;
cin>>n;
repeat(n){
  cin>>m;
  float D=0;
  repeat(m){
    cin>>A>>B;
        C=(A-B)*(A-B);
    D=D+C;
    }
    D=sqrt(D);
    printf("%.2f\n", D);
    }
}
