#include <iostream>

using namespace std;
string str;
bool Try(int leftPivot, int rightPivot){
    if(leftPivot >= rightPivot) return true;
    if(str[leftPivot] != str[rightPivot]){
        return false;
    }
    else{
        return Try(leftPivot+1, rightPivot-1);
    }
}

int main()
{
    cin >> str;
    int len = str.length();
    cout << Try(0, len-1);
    return 0;
}
