#include <simplecpp>
main_program{
int n, k, f, f1 = 1, f2 = 0 ;
cin >> n >> k;
cout << f2 % k << endl;
cout << f1 % k << endl;
repeat(n-2){

f = f1 + f2;
cout << f % k << endl ;
int temp = f1;

f1 = f;
f2 = temp;
}

}
