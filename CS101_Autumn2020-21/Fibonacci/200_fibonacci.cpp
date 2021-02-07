//
//  area.cpp
//  
//
//  Created by Aditya Sriram on 11/12/20.
//

#include <simplecpp>
#include <iomanip>

main_program {
    long a = 0, b = 1, c;
    long n, k;
    cin>>n>>k;
    cout<<(a % k)<<endl;
    cout<<(b % k)<<endl;
    for (int i = 1; i <= n - 2; i++) {
        c = (a + b) % k;
        cout<<c<<endl;
        a = b % k;
        b = c % k;
    }
}
