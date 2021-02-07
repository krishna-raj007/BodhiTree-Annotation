//
//  fibonacci.cpp
//  
//
//  Created by Sai teja Varanasi on 18/12/20.
//

#include <simplecpp>
main_program{
    long long int a=0,b=1,n,k,c;
    cin>>n>>k;
    cout<<a%k<<endl;
    cout<<b%k<<endl;
    repeat(n-2){c=b%k;
        cout<<(a+b)%k<<endl;
        b=a%k+b%k;
        a=c%k;
    
    }
}
