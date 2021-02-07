#include<simplecpp>

main_program{
//fibonacci.cpp

unsigned long int n,k,a=0,b=1,y,t;
cin >> n >> k;
cout << a <<"\n" << b << "\n";
repeat(n-2)
     {y= (a+b)%k; cout<<y<<"\n"; a=b; b=y;}

}
