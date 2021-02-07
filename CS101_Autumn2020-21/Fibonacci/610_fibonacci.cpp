#include<simplecpp>

main_program{
    long int fn,i=0,k,n,fn1=1,fn2=0;
    cin >> n >> k;
    if (n>=1 && n<=10e5 && k>1 && k<=10e5){
    while (i<n){
        if (i==0 || i==1){
            fn=i;
            cout << fn%k << "\n";
        }
        else{
            fn=fn1+fn2;
            cout << fn%k << "\n";
            fn2=fn1; fn1=fn;
        }
        i++;}
    }
}
