#include<simplecpp>

main_program
 {
    int n, k, f_2 = 0, f_1 = 1, fi = 0,w;
   cin >> n >> k;
    for(int i = 1; i <= n; i++)
     {
      fi = (fi+f_2)%k;
      f_2 = f_1%k;
      f_1 = fi%k;
      //w = fi%k;
      cout << fi <<"\n";
     }
 }
