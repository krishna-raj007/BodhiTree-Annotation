#include<simplecpp>
main_program{
  int n,s;
  float a,b,c;
  cin>>s;

  repeat(s){
    c=0;
      cin>>n;
    repeat(n){
      cin>>a;
      cin>>b;
      c=c+(a-b)*(a-b);




    }
  printf("%.2f\n",sqrt(c));
  }
}
