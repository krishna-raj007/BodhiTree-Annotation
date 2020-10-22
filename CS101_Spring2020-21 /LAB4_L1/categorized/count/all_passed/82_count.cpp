#include<simplecpp>

main_program{

   int Q,q=2,w=3,e=5,r=7,t=11,A;

   cin>>Q;

   repeat(Q){

   cin>>A;
   int i=0;

   if(A%q==0) i=i+1;

   if(A%w==0) i=i+1;

   if(A%e==0) i=i+1;

   if(A%r==0) i=i+1;

   if(A%t==0) i=i+1;

	cout<<i<<endl;
	}
}
