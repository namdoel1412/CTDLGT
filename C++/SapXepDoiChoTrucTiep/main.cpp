#include <iostream>

using namespace std;

int main()
{
    int n;
    int a[105];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int i = 0;
    while(i < n-1){
        for(int j = i+1; j < n; j++){
            if(a[i] > a[j]){
                swap(a[i], a[j]);
            }
        }
        cout << "Buoc " << (i+1) << ": ";
        for(int j = 0; j < n; j++){
            cout << a[j] << " ";
        }
        cout << endl;
        i++;
    }

    return 0;
}
