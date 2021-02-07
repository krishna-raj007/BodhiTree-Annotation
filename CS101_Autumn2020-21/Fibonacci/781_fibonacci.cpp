#include <simplecpp>
main_program{
int n,k,i=2;
cin >> n >> k;
cout << 0%k << endl << 1%k << endl;
int arr_k[100000];
arr_k[0]=0;
arr_k[1]=1;
while(i<=n-1){
    arr_k[i]=arr_k[i-1]+arr_k[i-2];
    cout << arr_k[i]%k << endl;
    i=i+1;
    }
}
