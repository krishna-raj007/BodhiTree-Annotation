#include<simplecpp>

main_program {
  long int n, t1 = 0, t2 = 1, a = 0, k;
  cin>>n>>k;
    for (int i = 1; i <= n; ++i){
      if(i == 1)
        {
            cout <<t1<<endl;
            continue;
        }
        if(i == 2)
        {
            cout << t2 <<endl;
            continue;
        }
        a = t1%k + t2%k;
        t1 = t2;
        t2 = a;
        cout << a%k <<endl;
    }
}
