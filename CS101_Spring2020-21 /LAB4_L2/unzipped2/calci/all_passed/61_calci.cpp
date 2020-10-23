#include<simplecpp>

main_program{
 int x;
 float a ,b,m,n ;
 char k;
 cin>>x;
repeat(x){
    cin>>a>>k>>b;
 if(k=='+'){
     cout<<a+b<<endl;
  }
 else if(k=='*'){
    m=a*b;
    cout<<m<<endl;
  }
 else if(k=='/'){
    n=a/b;
    cout<<n<<endl;
  }
  else if(k=='-'){
    cout<<a-b<<endl;
  }
  else{
    cout<<-1<<endl;
  }
  }

 }
