#include<simplecpp>
main_program{
long long int n,k;
 cin>>n>>k;
 int x=0,y=1;
 cout<<x%k<<endl;
 cout<<y%k<<endl;

      repeat(n-2){
            int s;
            s=x+y;
            cout<<s%k<<endl;
            y=x+y;
            x=y-x ;
    }

}
