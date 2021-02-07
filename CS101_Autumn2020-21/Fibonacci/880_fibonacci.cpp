#include<simplecpp>
    main_program
    {
    int fn_2 = 0, fn_1 = 1, f_n = 0, n,k,z;

    cin >> n>>k;


    cout<<fn_2<<endl<<fn_1;

    f_n = fn_1 + fn_2;

    while(f_n <= n)
    {   z= f_n % k;
        cout << z <<endl;
        fn_2 = fn_1;
        fn_1 = f_n;
        f_n = fn_2 + fn_1;
    }

}
