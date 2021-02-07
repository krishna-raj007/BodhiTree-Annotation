#include<simplecpp>

main_program{
//Write your code here
 long int n,k,x=0,y=1,i=1,z;
  cin >> n >> k;
  cout <<x%k<<endl;

   cout <<y%k<<endl;
  while (i<=(n-2)){
   z=y+x;
   cout << z%k<<endl;
   x=y;
   y=z;
   i++;
   }

   }

