#include<simplecpp>
main_program{
      float num1,num2;
      char op;
      int Q;
      cin>>Q;
      repeat(Q){
      cin>>num1>>op>>num2;

      switch(op){
      case'+':
        cout<<num1+num2<<endl;
      break;

      case'-':
        cout<<num1-num2<<endl;
      break;

      case'*':
        cout<<num1*num2<<endl;
      break;

      case'/':
        cout<<num1/num2<<endl;
      break;

      default:
        cout<<"-1"<<endl;

      }}






}
