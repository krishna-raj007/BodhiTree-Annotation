#include<simplecpp>
//Made by Pranava Singhal - 200070057
//Prints first n Fibonacci numbers modulo k

main_program
{
  long int n,k;
  cin>>n>>k;
  for(int a = 0,b = 1, i =0, temp = 0; i<n; i++)
  {
    cout<<a<<endl;
    temp = a;
    a = b%k;
    b = temp + b;
  }
}
