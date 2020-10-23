#include<simplecpp>

main_program{
int n;
cin>>n;
repeat(n){
  float p,q;
  char x;
  cin>>p>>x>>q;
       switch(x){
             case '+': cout<<p+q<<endl;
             break;
             case '*': cout<<p*q<<endl;
             break;
             case '-': cout<<p-q<<endl;
             break;
             case '/': cout<<p/q<<endl;
             break;
             default : cout<<-1<<endl;
             break;
             }
}

	//Write your code here

}
