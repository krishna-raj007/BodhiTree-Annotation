#include<simplecpp>

main_program{
//fibonacci series...
 int a1=0,a2=1,a3,k,n;
 cout << "enter number of term :"; cin >> n;
 cout << "enter k :"; cin >> k;
 cout << a1%k  << endl << a2%k << endl;
 repeat(n-2){
  a3=a2+a1;
  cout << a3%k << endl;
  a1=a2;
  a2=a3;
  }
}

