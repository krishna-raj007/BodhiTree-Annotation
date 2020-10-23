#include<simplecpp>

main_program{

	//Write your code here
        long long int n; cin>>n;
        double s = 1, i = -1, r =1;
        for (int x =1; x<=n; x++){
        s += i/(r+2);
        i *= -1;
        r += 2;
        }
    cout<<4*s;
}
