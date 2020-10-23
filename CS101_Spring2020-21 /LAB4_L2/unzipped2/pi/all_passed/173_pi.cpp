#include<simplecpp>

main_program{
            int n;
            double p;
            cin >> n;
            for (int i=1;i<=n;i++){
            p += ((pow(-1,i))*1.0)/((2*i)+1);
            }
            double t;
            t = 4*(1+p);
            cout<<t<<endl;
            }
