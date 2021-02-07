#include<simplecpp>

main_program{
  long n,k;
  cin>>n>>k;
   long long a1=1,a2=1,a3=0;
  long ans=0;
  if(n==1){
    cout<<ans;
  }
  else if(n==2){
    repeat(2){
      cout<<ans<<endl;
      ans++;
    }
  }
  else if(n>2){
    repeat(2){
      cout<<ans<<endl;
      ans++;
    }
  ans=1;
  cout<<ans<<endl;
  for(int i=0;i<n-3;i++){
    a3=a1+a2;
    a1=a2%k;
    a2=a3%k;
    ans=a3%k;
    cout<<ans<<endl;
  }
 }
}
