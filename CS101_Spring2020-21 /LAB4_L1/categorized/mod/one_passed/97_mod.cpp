#include<simplecpp>

main_program{
long int a, r, b, p;
double  y,z,x;
p = 1;

cin >> a >> b;
while(r>0){
        r = a * (a-1);
//cout  << a << " " << a - 1 << endl;
a = a-2;
if (r == 0) break;
p = p*r;
p = p % b;
//cout << r << endl;
}
y = p/b;

z = abs(y);
x = p - (b*z);
cout << x;
//cout << p;

}
