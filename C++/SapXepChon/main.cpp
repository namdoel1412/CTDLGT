#include <iostream>

using namespace std;

int main()
{
    int n;
    int a[105];
    int res[105];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        int pos = i;
        for(int j = i-1; j >= 0; j--){
            if(a[j] > a[pos]){
                swap(a[j], a[pos]);
                pos = j;
            }
        }
        cout << "Buoc " << (i) << ": ";
        for(int j = 0; j <= i; j++){
            cout << a[j] << " ";
        }
        cout << endl;

    }
}
