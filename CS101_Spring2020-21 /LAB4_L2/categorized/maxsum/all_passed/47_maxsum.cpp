#include<simplecpp>

main_program{
int n, a,b ;
cin>>n>>a>>b;
int max(a+b);
if (n>=3){
    repeat(n-2){
    cin>>a;
    if (a+b >max){
        max=a+b;
    }
    b = a ;
    }
}

  cout<< max;
}
