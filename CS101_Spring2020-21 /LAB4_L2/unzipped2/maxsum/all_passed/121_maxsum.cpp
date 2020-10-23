#include<simplecpp>
main_program{
int n,a,b,maxi;
if(2<=n<=100 && 1<=a<= pow(10,17)&& 1<=b<=pow(10,17)){
    a = 1;
    cin >> n;
    maxi = 0;
    repeat(n){
    cin >> b;
    maxi = max(a+b,maxi);
    a=b;

    }
    cout << maxi;
}

else{cout << "invalid command" << endl;}

}
