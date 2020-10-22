#include<simplecpp>
main_program{
 long int q,i,p,c;
  cin>>q;

  repeat(q){c=0;p=1;
       cin>>i;
       repeat(5){

       switch(p){
           case 1: if(i%2==0) {c=c+1;} break;
           case 2: if(i%3==0){c=c+1;} break;
           case 3: if(i%5==0){c=c+1;} break;
           case 4: if(i%7==0){c=c+1;} break;
           case 5: if(i%11==0){c=c+1;} break;
                 }
                 p++;
                 }
                 cout<<c;
       }
}
