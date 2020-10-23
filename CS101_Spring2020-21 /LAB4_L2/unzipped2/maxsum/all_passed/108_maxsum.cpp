#include<simplecpp>

main_program{

long long int a,b,k;
int n;
cin>> n;
cin>>a>>b;
k=a+b;
repeat(n-2){
    cin>>a;
    if(a+b>k){
        k = a+b;
    }
    b = a;
}
cout<< k;

}


