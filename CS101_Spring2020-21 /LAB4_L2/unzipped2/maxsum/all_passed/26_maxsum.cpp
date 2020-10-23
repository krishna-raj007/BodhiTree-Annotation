#include<simplecpp>

main_program{

  int n;
  long long int a1,a2,ai,s;
  cin>>n;
  cin>>a1>>a2;
  s=a1+a2;
  repeat(n-2){
    cin>>ai;
    s=max(s,a2+ai);
    a2=ai;
  }
cout<<s;
}
