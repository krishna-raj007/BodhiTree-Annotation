#include<simplecpp>

main_program{
long long int n, k, mod;
cin >> n >> k;
long long int a=0, b=1, nxtb;
cout << a<< endl <<b << endl;
repeat(n-2){
nxtb=a+b;
mod= nxtb % k;
cout << mod << endl;
a=b;
b=nxtb;

}


}


