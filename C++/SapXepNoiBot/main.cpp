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
    for(int i = 0; i < n ; i++){
        int dem = 0;
        for(int j = 0; j < n - i - 1; j++){
            if(a[j] > a[j+1]){
                dem++;
                swap(a[j], a[j+1]);
            }
        }
        if(dem == 0){
            break;
        }
        cout << "Buoc " << (i+1) << ": ";
        for(int j = 0; j < n; j++){
            cout << a[j] << " ";
        }
        cout << endl;

    }
    return 0;
}
