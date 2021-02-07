#include<simplecpp>

main_program{
//Write your code here
long long int n,k ,fprev1=0,fnow=0, fprev2=1;
cin >> n >> k ;
cout << 0 << endl;
cout << 1%k <<endl;
repeat (n-2){
fnow = fprev1 + fprev2 ;
fprev1 = fprev2%k ;
fprev2 = fnow%k ;

fnow = fnow % k ;
cout << fnow << endl;
}
}
