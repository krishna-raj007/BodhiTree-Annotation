#include<simplecpp>

main_program{
    int n;
    cin>>n;
	char operation;
	float Num1,Num2;

	 repeat(n)
	 {
	     cin>>Num1>>operation>>Num2;
      switch(operation)
      {
      case'+':
      cout<<Num1+Num2<<endl;break;
      case '-':
      cout<<Num1-Num2<<endl;break;
      case '*':
      cout<<Num1*Num2<<endl;break;
      case '/':
      cout<<Num1/Num2<<endl;break;
      default:
        cout<<"-1"<<endl;
      }
	     }
}
