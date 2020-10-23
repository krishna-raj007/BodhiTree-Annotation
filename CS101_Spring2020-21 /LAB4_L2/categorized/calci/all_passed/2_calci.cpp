#include<simplecpp>

main_program{
    char op;
    float Q,Num1,Num2,z;
    cin>>Q;
    repeat(Q){
cin>>Num1>> op>>Num2;
switch (op){
          case'+' : cout<<Num1+Num2<<endl;break;
          case'-':cout<<Num1-Num2<<endl;break;
          case'*':cout<<Num1*Num2<<endl;break;
          case'/':cout<<Num1/Num2<<endl;break;
          default:cout<<-1<<endl;break;
}

}
}
