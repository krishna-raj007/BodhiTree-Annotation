#include<simplecpp>

main_program{

long long n,m;

cin >> n >> m;

long long f1=0, f2=1, fn;

cout<< f1%m << endl << f2%m << endl;

repeat(n-2){

fn = f1 + f2;

long long a = fn%m;

cout<< a<< endl;

f1 = f2;

f2 = a;

}

}
