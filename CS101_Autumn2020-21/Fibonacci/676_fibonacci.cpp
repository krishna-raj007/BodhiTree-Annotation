#include<simplecpp>

int main(){
    long long int n, k, fib1=0, fib2=1;
    cin>>n>>k;
    cout<<fib1<<"\n"<<fib2<<"\n";
    for(long long int i=0; i<n-2; i++){
        cout<<(fib1+fib2)%k<<"\n";
        int temp=fib2;
        fib2=(fib1+fib2)%k;
        fib1=temp;
    }
    return 0;
}
