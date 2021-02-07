#include<simplecpp>
main_program{
long long int n;
long long int k;
cin>>n>>k;
long long int term1 = 0;
long long int term2 = 1;
long long int temp;
cout<<(term1 % k)<<endl;
cout<<(term2 % k)<<endl;
for(int i=1; i<=n-2; i++)
{temp = ( (term2%k) + (term1%k) )%k;
term1 = (term2%k);
term2 = (temp%k);
cout<<(temp % k)<<endl;
}

}
