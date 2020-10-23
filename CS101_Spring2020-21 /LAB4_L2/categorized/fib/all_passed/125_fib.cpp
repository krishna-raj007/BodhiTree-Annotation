#include<simplecpp>

main_program
{
 int num, n , f0 = 0 , f1= 1 , fn =0, fn1 , fn2 ;
 cin>>n;
int cntr =2;
 while(fn < n) {
        cntr++;
        fn = f0 + f1 ;
            f0 = f1;
            f1 = fn;
    //cout<<fn<<endl;
            }
            //cout<<fn<<endl;

            if(fn == n) cout<<cntr<<endl;
            else cout<<"-1\n";

}
