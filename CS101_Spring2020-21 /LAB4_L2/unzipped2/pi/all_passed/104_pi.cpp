#include<simplecpp>

main_program{
  double ans=0;
  int i,n;
  cin>>n;
  for(i=0;i<=n;i++){
    if(i%2==0){
      ans+=(1.0/((2*i)+1));
    }
    else{
      ans-=(1.0/((2*i)+1));
    }
  }
  cout<<ans*4;
}
