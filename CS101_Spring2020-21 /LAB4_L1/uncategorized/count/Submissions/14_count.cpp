#include<simplecpp>
main_program{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    int q, number=0;
    cin>>q;
    switch(2){
      case 2:if(q%2==0)number++;
      case 3:if(q%3==0)number++;
      case 5:if(q%5==0)number++;
      case 7:if(q%7==0)number++;
      case 11:if(q%11==0)number++;
    }
  cout<<number<<endl;
  }
}

