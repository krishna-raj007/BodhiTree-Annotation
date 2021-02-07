#include<simplecpp>

main_program{

int n;
int k;
cin>>n>>k;
int y= 1%k;
int num=3, f0=0, f1=1;
cout<< 0<< endl;
cout<< y << endl;
while(num<=n)
{
   int F;

   F= f0+f1 ;

  int x;
  x= F%k;
   cout<< x<< endl;



   f0=f1;
   f1=F;



 num++;

}
}

