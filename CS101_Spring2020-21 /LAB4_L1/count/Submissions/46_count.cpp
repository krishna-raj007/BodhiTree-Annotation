#include <simplecpp>
main_program{
int q,n;
cin>>q;
repeat(q){
   cin>>n;
   int sum=0;
   if(n%2==0)
       sum++;
   if(n%3==0)
       sum++;
   if(n%5==0)
      sum++;
   if(n%7==0)
      sum++;
   if(n%11==0)
      sum++;
cout<<sum<<endl;
}

}
