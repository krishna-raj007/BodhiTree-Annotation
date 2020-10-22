#include<simplecpp>

main_program{
int q; cin >>q;
repeat(q){
  int n; cin >>n;int m =0;
     switch(1){
       case 1 : if(n%2 == 0)
                     m ++;
       case 2: if(n%3 == 0)
                     m ++ ;
       case 3: if(n%5 ==0)
                     m ++ ;
       case 4: if(n%7 == 0)
                     m ++ ;
       case 5: if(n%11 == 0)
                     m ++ ;

       cout << m<<endl;}

}

}

