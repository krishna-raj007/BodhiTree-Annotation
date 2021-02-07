#include<simplecpp>

int main(){
   long long int m=0,n=1,p,i,number,k;
           cin>>number>>k;
           cout<<m<<" "<<n<<" ";
         for(i=2; i<number; ++i){
                            p=m+n;
                        cout<<p%k<<" ";
                            m=n;
                            n=p;
                }

}
