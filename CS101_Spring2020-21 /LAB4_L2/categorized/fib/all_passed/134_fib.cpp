#include<simplecpp>
main_program{

        int n, i=2;
        cin>>n;
        {
            int a = 0;
            int b = 1;
            if (n==a){
            cout<<0;
            }
            else if(n==b){
            cout<<1;
            }
            else{
            int c = a+b;
            while(c<n)
            {
                a = b;
                b = c;
                c = a + b;
                i++;
                if(c == n){
                cout<<i;}

                else if(c>n){
                    cout<<-1;
                }
            }
            }
        }
}
