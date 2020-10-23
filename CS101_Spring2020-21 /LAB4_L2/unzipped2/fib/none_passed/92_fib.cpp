
#include<simplecpp>

main_program{

 int n,a,b,sum,nexta,nextb;
 cin>>n>>a>>b;
 cin>>sum>>nexta>>nextb;
 repeat(n-2){
 int Num;
 cin>>Num;
 if ((a+b)<=(Num+b))
 {   sum = Num + b;
     cout<<sum<<endl;

 }
 nexta=b;
 nextb=sum;
 a=nexta;
 b=nextb;
 }
 cout<<sum;





 }




