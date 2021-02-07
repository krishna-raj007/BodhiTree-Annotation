#include<simplecpp>

main_program{
  long int n ,k ,F_0=0 ,F_1=1;
  cin >> n >> k;
  cout << F_0 << endl << F_1<< endl;
  for (int i=2 ; i<n ;i++){
     long int F,f;
     f=F_0 +F_1;
     F= (F_0%k +F_1%k)%k;
     cout << F <<endl;
     F_0=F_1%k;
     F_1=f%k;

     }

}
