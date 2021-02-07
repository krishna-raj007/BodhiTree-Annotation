#include<simplecpp>

main_program{
int n , k;
cin>> n >> k;

int a,b,c;
a=0;
b=1;
c=a+b;
cout<< a%k <<endl<< b%k <<endl;

repeat(n-2){
cout<< c <<endl;
a=b;
b=c;
c=(a%k + b%k)%k;
}


}

