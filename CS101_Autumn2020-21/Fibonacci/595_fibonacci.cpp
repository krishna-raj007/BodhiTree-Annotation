#include<simplecpp>

main_program{
int n,k,c, a=0 , b=1;
cin>>n>>k;

for(int d=0;d<=n-1 ;d++){
                if((k<=1)&&(n<1))continue;
                if(d==0)
                cout<<a%k<<endl;
                else if(d==1)
                cout<<b%k<<endl;
                else

                {c=(a+b)%k;



                cout<<c<<endl;
                a=b;
                b=c;}
                }



}
