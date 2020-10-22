#include<simplecpp>
main_program{
int a,q,i;
cin >> q;
repeat(q){
i=0;
cin >> a;
if (a%2==0){i=1;}
if (a%3==0){i=i+1;}
if (a%5==0){i=i+1;}
if (a%7==0){i=i+1;}
if (a%11==0){i=i+1;}
cout <<i<< endl;
}
}
