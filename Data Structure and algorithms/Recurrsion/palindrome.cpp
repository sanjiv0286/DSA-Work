#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int start, int end)
{
    if (start >= end)
        return true;

    return ((str[start] == str[end]) &&
            isPalindrome(str, start + 1, end - 1));
}

int main()
{

    string s ;
    cin>>s;
    // printf("%s", isPalindrome(s, 0, s.length() - 1) ? "true" : "false");
    cout << isPalindrome(s, 0, s.length()-1)? "true" : "false";
    return 0;
}