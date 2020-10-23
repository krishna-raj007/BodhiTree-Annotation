#include<simplecpp>

main_program{

	//Write your code here
	int n,temp,a,maxsum=0;
	cin>>n;
	cin>>temp;
	repeat(n-1){
        cin>>a;
        temp = temp+a;
        maxsum = max(maxsum,temp);
        temp = a;
	}
    cout<<maxsum;
}
