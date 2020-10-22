#include<simplecpp>

main_program{
int Q ;
cin >> Q;
repeat (Q){
 int I ;
 int p,q,r,s,t;
 cin >> I ;
 if(I%2==0)
    p=1;
 else p=0;
 if(I%3==0)
    q=1;
 else q=0;
 if(I%5==0)
    r=1;
 else r=0;
 if(I%7==0)
 s=1;
 else s=0;
 if(I%11==0)
    t=1;
 else t=0;
 cout << p+q+r+s+t << endl;
}



}
