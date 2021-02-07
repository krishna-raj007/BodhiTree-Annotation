#include<simplecpp>

main_program{
      int n, k, t1 = 0,t2 = 0, next;cin>>n>>k;
      repeat(n){next = (t1+t2)%k;
                            t1=t2;
                            t2 = next ; cout<<t1<<endl;}}
