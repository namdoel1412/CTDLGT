#include <iostream>

using namespace std;

long long fibo[100]={0};

char Try(int n, long long k){
    // note that you must return ;;
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k > fibo[n-2])
    {
        return Try(n-1, k - fibo[n-2]);
    }
    else{
        return Try(n-2, k);
    }
}

void Execute(){
    fibo[1] = 1;
    fibo[2] = 1;
    for(int i = 3; i <= 93; i++){
        fibo[i] = 0;
        fibo[i] = (long long)(fibo[i-2] + fibo[i-1]);
        //cout << fibo[i] << " ";
    }
//    for(int i = 3; i <= 60; i++){
//        //cout << fibo[i] << " ";
//    }
}

int main()
{
    int t, n;
    long long k;
    Execute();
    cin >> t;
    while(t--){
        cin >> n >> k;
        cout << Try(n, k) << endl;
    }
    return 0;
}
