#include<simplecpp>

main_program{

 int n,k=1,sum=0,maxsum=0;
 cin>>n;
 long a[n];
 cin>>a[0];



  repeat(n-1)
  {
   cin>>a[k];
   sum =a[k]+a[k-1];
   maxsum=max(maxsum,sum);
   k++;
  }

  cout<<maxsum;



}
