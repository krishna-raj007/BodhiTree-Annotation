#include<simplecpp>

main_program{

int Q;
cin>>Q;
float num1,num2,result;
 char operation;
 repeat(Q){
 cin>>num1;
 cin>>operation;
 cin>>num2;
 switch(operation){
 case '/' :
 result=num1/num2;
 cout<<result<<endl;
 break;
 case '+' :
 result=num1+num2;
 cout<<result<<endl;
 break;
 case '*' :
 result= num1*num2;
 cout<<result<<endl;
 break;
 case '-' :
 result= num1-num2;
 cout<<result<<endl;
 break;
 default:
    cout<< "-1"<<endl;}








 }



}
