
#include<simplecpp>
main_program{
    long long int i=2, n,t1=0,t2=1,next;
    int temp;
    cin>>n;
    while(n>0){
            if (n==0){
                    cout<<1;
            }
            if (n==1){
                    cout<<2;
            }
            next=t1+t2;
            t1=t2;
            t2=next;
            i++;
            if(next==n){temp=1;break;}
            if(next>n)break;
    }
  if(temp==1)cout<<i;
else cout<<"-1"<<endl;
}

