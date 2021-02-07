#include<simplecpp>

main_program{
unsigned long long int n,k,fi=0,fn=1;
cin >> n >> k;
cout << fi%k << endl;
cout << fn%k << endl;
fi = fi%k;
fn = fn%k;
for(int ind = 1;ind <= n-2;ind++){
    unsigned long long int x;
    x = fi;
    fi = fn;
    fn = (x + fn)%k;
    cout << fn%k << endl;
}

}
