#include<simplecpp>

main_program{
     long unsigned int n,k;
     cin >> n >> k;
     long unsigned int t,x=1,y=0;
     cout << "0" << endl;
     cout << "1" << endl;
     for(long unsigned int i= 0; i < n-2; i++)
         {
           t= (x%k + y%k)%k;
           cout << t << endl;
           y=x;
           x=t;
         }

}
