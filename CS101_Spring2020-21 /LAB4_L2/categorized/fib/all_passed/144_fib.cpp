#include<simplecpp>

main_program{
    int f0, f1, f2,i;
    long long int n;
    cin>>n;
    i=1;
    f0=0;
    f1=1;
    f2 = 1;
    while(f2 < n){

    f2= f0 + f1;
    f0=f1;
    f1= f2;
    i++;
    }
    if(n==1){
        cout<<1;
    }
    else if(n==0){
        cout<<0;
    }
    else if(n==f2){
        cout<<i;
    }
    else{
        cout<< -1;
    }
    }



