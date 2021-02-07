#include<simplecpp>

main_program
{ unsigned int m,n,i;
  cin>>m>>n;
  int a=0,b=1,c;

  for(i=0;i<m;i++)
  { cout<<a%n<<endl;
    c=a+b;
    a=b%n;
    b=c;
  }

}
