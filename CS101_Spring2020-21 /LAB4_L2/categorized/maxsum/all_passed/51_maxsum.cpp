#include<simplecpp>

main_program{

	//Write your code here
        int n; cin>>n;
        long long int max_sum = 0;
        long long int a1=0, a2=0;
        cin>>a1>>a2;
        max_sum = a1 + a2;
        repeat(n-2){
        long long int a3=0;
        cin >> a3;

        max_sum = max(max_sum, a2 + a3);
        a2 = a3;


        }
        cout<<max_sum;
}
