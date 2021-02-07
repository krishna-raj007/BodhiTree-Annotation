#include<simplecpp>

main_program{
//Write your code here
long long int n, k;
cin >>n >> k;
long long int fn_2=0, fn_1=1,fn=0;
if(n==1) cout << '0';
else if (n==2) cout << '0' << endl << '1';
else{
cout << '0' << endl << '1'<< endl;
for(int i=0;i<n-2;i++){
 fn=fn_2+fn_1;
fn%=k;
cout << fn<<endl;
fn_2=fn_1;
fn_1=fn;
}

}
}
