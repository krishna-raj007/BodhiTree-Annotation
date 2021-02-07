#include<simplecpp>

main_program{
//Write your code here
int n,k;
cin>>n>>k;
    if(n==0){
     return 0;
  }
 else if(n==1){
    cout<<0<<endl;
    return 0;
  }
  else{
   cout<<0<<endl;
   cout<<1<<endl;
   if(n>2){
    int x=0,y=1,i=2,temp;
    while(i<n){
     temp=y;
     y=y+x;
     x=temp;
     cout<<(y%k)<<endl;
     i++;
     }
    return 0;
    }
  }
}
