#include<simplecpp>
#include<iostream>

//Write your code here

main_program{
   long long int n;
   cin >> n;
   long long int f[n];
   long long int i;
   long long int k;
   cin >> k;
   f[0] = 0;
   f[1] = 1;
   for (i = 2; i < n; i++) {
      f[i] = (f[i-1] + f[i-2])%k;
   }
   for (i = 0; i < n; i++) {
      cout<<f[i]<<" ";
   }

}
