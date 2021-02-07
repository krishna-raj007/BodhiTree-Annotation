#include<simplecpp>
main_program{
  int x=0,y=1;
  int n,k,i=3,temporaryX,output;
  cin>>n>>k;
  if(n==1){cout<<"0";}
  else{
    int result2 = 1 % k;
    cout<<"0"<<endl<<result2<<endl;
    while(i<=n){
      temporaryX = y;
      y = (y + x)%k;
      x = temporaryX;
      output = y % k;
      cout<<output<<endl;
      i++;
    }
  }
}