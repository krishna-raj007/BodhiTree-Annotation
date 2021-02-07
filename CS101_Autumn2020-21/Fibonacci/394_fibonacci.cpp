#include<simplecpp>

main_program{
long long int n, k, s, d, f, ans ;
cin >> n>> k ;
d=0;
s=0;
cout << s<<endl;
s=s+1;
repeat (n-1){ ans = s % k;
             cout << ans << endl;
             f= s;
             s=ans +d ;
             d= f;}
}
