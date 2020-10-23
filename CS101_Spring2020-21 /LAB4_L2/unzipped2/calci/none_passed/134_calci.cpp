#include<simplecpp>
main_program{
    int q;
float num_1,num_2;
cin>>num_1>>num_2;
cout<<"number of operations to be performed?";
cin>>q;
repeat(q){
    char command;
    cin>>command;
switch(command){
case '+':cout<<num_1 + num_2;break;
case '*':cout<<num_1 *num_2;break;
case '-':cout<<num_1 -num_2;break;
case '/':cout<<num_1/num_2;break;
default:cout<<-1;
}
cout<<endl;
}
}
