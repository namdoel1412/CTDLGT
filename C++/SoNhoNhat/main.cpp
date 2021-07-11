#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int s, d;
        cin >> s >> d;
        double check = double(s*1.0/d);
        if(check > 9.0){
            cout << "-1";
        }
        else{
            int tmp = s - 1;
            int numOf9 = tmp/9;
            int modOf9 = tmp%9;
            if(numOf9 == d){
                for(int i = 0; i < numOf9; i++){
                    cout << 9;
                }
            }
            else if(numOf9 == d-1){
                cout << 1+modOf9;
                for(int i = 0; i < numOf9; i++){
                    cout << 9;
                }
            }
            else{
                cout << 1;
                for(int i = 1; i < d-numOf9-1; i++){
                    cout << 0;
                }
                cout << modOf9;
                for(int i = 0; i < numOf9; i++){
                    cout << 9;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
