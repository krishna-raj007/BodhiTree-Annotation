#include<simplecpp>

main_program{

  int q;
  cin>>q;

  repeat(q)
    {int n,counts=0;
    cin>>n;

    if ( (n%2 == 0) ) counts= counts + 1;
    if ( (n%3 == 0) ) counts= counts + 1;
    if ( (n%5 == 0) ) counts= counts + 1;
    if ( (n%7 == 0) ) counts= counts + 1;
    if ( (n%11 == 0) ) counts= counts + 1;

    cout<<counts<<endl;}

}
