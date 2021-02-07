#include<simplecpp>
main_program{


int n, k , t1=0 , t2=1, x=0;
cin>>n>>k;
 for (int i=1 ; i<=n ; ++i){

 if(i==1){
 cout<< t1%k<< endl ;
continue ;}
if(i==2)
{
cout<<t2%k<<endl;
continue;}
x = (t1 + t2)%k;
t1=t2;
t2= x;
cout<< x<<endl;

}
}
