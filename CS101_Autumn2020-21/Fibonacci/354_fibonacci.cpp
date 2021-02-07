#include<simplecpp>

main_program{
unsigned long long int j, n, k, i0 = 0, i1 = 1, i2;
cin >> n >> k;
cout << i0 << endl << i1 << endl;
for(j=1 ;(n-2)>=j; j++ )
 {
  i0 = i0 %k;
  i1 = i1 %k;
  i2 = (i0 + i1)%k;
 cout << i2 << endl;
 i0 = i1;
 i1 = i2;
 }

}
