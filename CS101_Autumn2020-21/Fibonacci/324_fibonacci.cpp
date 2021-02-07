#include<simplecpp>

main_program{
//Write your code here
  long long int n,k,remi=0,prevterm=1,sprevterm=0;
  cin>>n>>k;
  if(n==1){
    cout<<0<<endl;
    }
  else if(n==2){
    cout<<0<<endl<<1<<endl;
    }
  else{
    cout<<0<<endl<<1<<endl;
    for(int i=1;i<=n-2;i++){
      remi=(prevterm%k)+(sprevterm%k);
      cout<<remi%k<<endl;
      sprevterm=prevterm%k;
      prevterm=remi%k;
    }
  }
}
