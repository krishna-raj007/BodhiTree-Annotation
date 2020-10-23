#include<simplecpp>

main_program{
int q;
float num1,num2,s;
char command;
cin>>q;
repeat(q){
cin>>command;
cin>>num1>>num2;
switch(command){

   case  '+' : s=num1+num2;cout<<s<<endl;
                break;
   case '-' : s=num1-num2;cout<<s<<endl;
               break;
   case '*' : s=num1*num2;cout<<s<<endl;
              break;
   case '/' : s=num1/num2;cout<<s<<endl;
               break;
   default : cout<<"-1"<<endl;
}

}

}
