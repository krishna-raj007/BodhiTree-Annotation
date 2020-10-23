#include<simplecpp>

main_program{
    int x,position=-1,a,b,i=2,c;
    cin >> x;
    if (x==0) {position=0;
              cout << position ;}

    if (x==1) {position=1;
              cout << position ;}

    a=0;
    b=1;
    c=a+b;

     while(position<0 && c<=x){
     if (x==c){position=i;
               cout << position;}

     a=b;
     b=c;
     c=a+b;

     i=i+1;
     }
     if (position<0) {cout << "-1";}



}
