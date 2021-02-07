//Sai kiran botla's work for lab_5
#include<simplecpp>
main_program{

long long  int n ,k;
cin>>n>>k;
 long long int a=0,b=1;cout<<0<<endl<<1<<endl;
if (n%2==0){
   repeat(n/2-1){
        a=(a%k)+(b%k);
        cout<<(a%k)<<endl;
        b=(b%k)+(a%k);
        cout<<(b%k)<<endl;
   }
}
else {
   repeat((n-1)/2-1){
         a=(a%k)+(b%k);
         cout<<(a%k)<<endl;
         b=(b%k)+(a%k);
         cout<<(b%k)<<endl;
   }
   a=(a%k)+(b%k);
   cout<<(a%k)<<endl;
}

}
