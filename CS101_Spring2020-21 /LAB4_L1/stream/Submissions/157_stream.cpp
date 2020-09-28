#include<simplecpp>

main_program{
 int k;

 cin >> k;

 int maximum = k;

  while ( k!=-1)
  {

     cin >> k;

    if(k > maximum)

      maximum = k;

  }

  cout<<maximum;

  }
