#include<simplecpp>

main_program{
int n;
cin>>n;
if(n == 0){
    cout<< 0 << endl;
}
else if(n == 1){
    cout<< 1 << endl;
}
else{
    int fib0 = 0, fib1 = 1, fib;
    repeat(n-1){
       fib = fib0 + fib1;
       fib0 = fib1;
       fib1 = fib;
    }
    cout << fib << endl;
}
}
