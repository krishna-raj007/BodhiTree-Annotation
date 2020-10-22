#include<simplecpp>

main_program{
int q, n;
cin>>q;     // number of queries
 repeat (q){
     int c=0;
 cin>> n;
 if (n%2==0)
    c=c+1;
 if (n%3==0)
    c=c+1;
 if (n%5==0)
    c=c+1;
 if (n%7==0)
    c=c+1;
 if (n%11==0)
    c=c+1;
    cout <<c<<endl;

 }



}
