#include<simplecpp>

main_program{
int n,m;
cin>>n>>m;
int a=0,b=0,c=1;
for(int k=0;k<=n;k++){
   a=b;
   int t =abs(a%m);
   cout<<t<<endl;
   b=c+a;
   c=a;

}

}
