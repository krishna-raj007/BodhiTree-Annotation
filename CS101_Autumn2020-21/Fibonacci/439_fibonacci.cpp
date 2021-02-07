#include<simplecpp>

main_program{
//Write your code here
long long int n,k;
cin >> n >> k;
long long int fpp = 0;
long long int fp = 1;
long long int res=1;
if(n==1){
    cout << fpp%k;
}
else{
    cout << fpp%k << endl;
    cout << fp%k << endl;

    for(int i=2;i<n;i++){
        res = (fp+fpp)%k;
        fpp = fp;
        fp = res;
        cout << res%k << endl;
    }
}
return 0;
}
