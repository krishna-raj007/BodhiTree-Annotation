#include<simplecpp>

main_program{

	//Write your code here

int n;
cin >> n;
repeat(n){
  float num1,num2;
  char op;
  cin >> num1;
  cin >> op;
  cin >> num2;

  if(op == '+'){
    cout << num1+num2 << endl;
  }
  else if(op == '-'){
    cout << num1-num2 << endl;
  }
  else if(op == '*'){
    cout << num1*num2 << endl;
  }
  else if(op == '/'){
    cout << num1/num2 << endl;
  }
  else {
    cout << "-1" << endl;
  }
}

}
