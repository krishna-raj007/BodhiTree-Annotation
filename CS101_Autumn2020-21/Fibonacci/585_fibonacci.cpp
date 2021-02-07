#include<simplecpp>

int main(){
    int n,k;cin>>n>>k;
    int l=0;
    int r=1;
    if(n==1){


    }
    for(int i=1;i<=n;i++){
        if(i==1) cout<<l<<endl;
        else if(i==2) cout<<r<<endl;
        else{
            int a=(l%k+r%k)%k;
            cout<<a<<endl;
            int t=r;
            r=a;
            l=t;
        }

    }
}
