#include<simplecpp>

main_program{

	int n,a=1,sum,y;

    cin               >>n;
    cin>>y;

    repeat(n-1){
               int x;
               cin>>x;
               sum=x+y;
               a=max(sum,a);
               y=x;

               }
           cout<<a;


}
