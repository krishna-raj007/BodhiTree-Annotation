#include<simplecpp>

main_program{

           int R,count=0;

           cin>>R;

           for(int i=1;i<=R;i++){

           int A,B,C,D,E,F;
              cin>>F;

               A=F%2;
               B=F%3;
               C=F%5;
               D=F%7;
               E=F%11;

               switch(A){
               case 0 : count=count+1;}
               switch(B){
               case 0:   count=count+1;
               }
               switch(C){
               case 0: count=count+1;
               }
               switch(D){
               case 0: count= count+1;}
               switch(E){
               case 0: count=count+1;}
                cout<<count<<endl;
                count=0;
               }

           }
