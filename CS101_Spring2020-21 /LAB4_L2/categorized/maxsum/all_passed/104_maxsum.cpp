#include<simplecpp>

main_program{
  int n,a,b,c,maximum=0;
  cin>>n;
  if(n>=2&&n<=100){
    cin>>a;
    cin>>b;
    c=a+b;
    maximum=c;
    repeat(n-2){
      a=b;
      cin>>b;
      c=a+b;
      if(maximum<c){
        maximum=c;
      }
    }
    cout<<maximum<<endl;
  }
}
