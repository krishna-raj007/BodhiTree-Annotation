#include<simplecpp>

int main()
{
    long int oldd,neww,i,nt,n,k;

    oldd=0;
    neww=1;

    cin>>n;
    cin>>k;

    if(n==1 && k>1 && k<=100000)
       cout<<0;
    else if(n==2 && k>1 && k<=100000)
      { cout<<0<<endl;
       cout<<(1%k)<<endl;
      }

    else if(n>2 && n<=100000 && k>1 && k<=100000)
    {
        cout<<oldd<<endl;
        cout<<neww<<endl;

       for(i=3;i<=n;i++)
       {
        
        nt=(oldd+neww)%k;
        oldd=neww;
        neww=nt;
        
        cout<<neww<<endl;
       }
    }
}
