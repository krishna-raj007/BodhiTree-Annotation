#include <simplecpp>
main_program{
      float n1=0,n2=1,i,n;
      int n3,k;
      cin>>n>>k;
      cout<<n1<<endl;
      cout<<n2<<endl;
      for(i=2;i<n;++i)
      {
           n3=n1+n2;
           cout<<n3%k<<endl;
           n1=n2;
           n2=n3;
       }
}
