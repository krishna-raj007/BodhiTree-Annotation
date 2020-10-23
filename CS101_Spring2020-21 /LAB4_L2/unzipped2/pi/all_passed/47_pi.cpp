#include<simplecpp>

main_program{
    int n, i=1;
    double ans=1;
    cin>>n;
repeat(n) {
    if ( i% 2==0){
        ans= ans + 1.0/ (2*i +1);
    }
       else {
        ans = ans - 1.0/ (2*i + 1);
       }
i=i+1;
}
cout<< 4 *ans<<endl;
}
