#include<simplecpp>
main_program{
int n,k,f_1=0,f_2=1,f_3;
cin>>n>>k;
cout<<"0"<<endl<<"1"<<endl;
repeat(n-2){f_3=f_1+f_2;
            if(f_3/k>=1){f_3=f_3%k;}
            cout<<f_3<<endl;
            f_1=f_2;
            f_2=f_3;}

}
