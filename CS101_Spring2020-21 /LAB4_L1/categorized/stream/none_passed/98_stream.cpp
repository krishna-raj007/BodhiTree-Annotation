#include<simplecpp>
main_program {
int q,r, a;
r=1;
cin >> q;
repeat(q) { cin>> a ;

if(r>a) r = r;
else r = a;}
cout << r;
}
