#include<simplecpp>

main_program{

  int q,n,ans=0;
  double a,b,x;
  cin>>q;
  repeat(q){
      cin>>n;
    repeat(n){
      cin>>a>>b;
      ans=ans+(b-a)*(b-a);

    }
    x=sqrt(ans);
    cout<<x;
  }

}
