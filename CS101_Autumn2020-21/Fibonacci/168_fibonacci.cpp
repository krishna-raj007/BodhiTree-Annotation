#include<simplecpp>

main_program{
//Write your code here

long long int n,k;
long long int x=0,y=1,s,t;
cin>>n>>k;

cout << x<< "\n" << y << "\n";
repeat(n-2)
{s = (x+y)%k;
 cout << s << "\n";
 x = y;
 y = s;}

}
