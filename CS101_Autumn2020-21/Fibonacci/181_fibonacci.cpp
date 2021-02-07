#include <simplecpp>

main_program{
   int n, k;
   cin>>n>>k;
   int rem_0=0, rem_1=1, rem;
   cout<<rem_0<<endl<<rem_1<<endl;
   repeat(n-2){
      rem= ((rem_0%k)+(rem_1%k))%k;
      cout<<rem<<endl;
      rem_0= rem_1;
      rem_1= rem;
   }
}
