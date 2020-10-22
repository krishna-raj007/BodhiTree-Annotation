#include<simplecpp>

main_program{
long int n ,m =-1;
while(n > 0) {
 cin >> n;
 if (n > m)
       m =n;
 if (n == -1) break;
 }
 cout << m << endl;
}
