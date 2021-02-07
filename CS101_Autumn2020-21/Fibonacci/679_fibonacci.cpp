#include <simplecpp>



int main()
{
   long int n,k,x1=0,x2=1,x3;
   cin>>n>>k;
   cout<<x1<<endl;
   cout<<x2<<endl;
   for(long int i{2};i<n;i++){
        x3=((x1%k)+(x2%k))%k;
        cout<< x3<<endl;;
        x1=x2; x2=x3;


   }


}
