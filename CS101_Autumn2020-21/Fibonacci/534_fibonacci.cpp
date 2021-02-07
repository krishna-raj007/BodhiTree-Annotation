#include<simplecpp>
main_program{
  int n,k,t=0,p,q,i;
  cin>>n>>k;
  cout<<"0"<<endl<<"1"<<endl;
  for(i=1;i<=n;i++)
  {
    if(i==1){p=0;continue;}
    else if(i==2){q=1;continue;}
    t=p+q;
    p=q;
    q=t;
    /*if(q>=10)q=q%10;
    if(p>=10)p=p%10;
    int z=t%k;
    if (z>10)z=z%10;*/
    cout<<t%k<<endl;
  }
 }
