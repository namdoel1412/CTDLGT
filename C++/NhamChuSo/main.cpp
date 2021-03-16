#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;
    string maxx1 = "", minn1="", maxx2="", minn2="";
    cin >> str1 >> str2;
    int len1 = str1.length();
    int len2 = str2.length();
    for(int i = 0; i < len1; i++){
        if(str1[i]=='5'){
            maxx1+='6';
        }
        else{
            maxx1+=str1[i];
        }
        if(str1[i]=='6'){
            minn1+='5';
        }
        else{
            minn1+=str1[i];
        }
    }

    for(int i = 0; i < len2; i++){
        if(str2[i]=='5'){
            maxx2+='6';
        }
        else{
            maxx2+=str2[i];
        }
        if(str2[i]=='6'){
            minn2+='5';
        }
        else{
            minn2+=str2[i];
        }
    }

    stringstream ssmax1(maxx1);
    stringstream ssmax2(maxx2);
    stringstream ssmin1(minn1);
    stringstream ssmin2(minn2);
    long imaxx1, imaxx2, iminn1, iminn2;
    ssmax1 >> imaxx1;
    ssmax2 >> imaxx2;
    ssmin1 >> iminn1;
    ssmin2 >> iminn2;
    cout << iminn1 + iminn2 << " " << imaxx1 + imaxx2;
    return 0;
}
