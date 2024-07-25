#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isAnagram(string s1, string s2) {
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}

int search(string pat, string txt) {
    int patLength = pat.size();
    int txtLength = txt.size();
    int count = 0;

    for (int i = 0; i <= txtLength - patLength; ++i) {
        if (isAnagram(pat, txt.substr(i, patLength))) {
            count++;
        }
    }

    return count;
}

int main() {
    string txt1 = "forxxorfxdofr";
    string pat1 = "for";
    cout << search(pat1, txt1) << endl;  // Output: 3

    string txt2 = "aabaabaa";
    string pat2 = "aaba";
    cout << search(pat2, txt2) << endl;  // Output: 4
    return 0;
}
