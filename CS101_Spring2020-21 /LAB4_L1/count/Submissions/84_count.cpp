#include<simplecpp>

main_program{
    int n;
    cin>>n;
    cout<<"\n";
 repeat(n)
 {
  int a,count=0;
  cin>>a;
  cout<<"\n";
  if(a%2==0)
    count++;
  if(a%3==0)
    count++;
  if(a%5==0)
    count++;
  if(a%7==0)
    count++;
    if(a%11==0)
    count++;
  cout<<count<<"\n";
 }
}
