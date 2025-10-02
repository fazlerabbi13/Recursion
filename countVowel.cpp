#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return (c == 'a' || c == 'A' || 
            c == 'e' || c == 'E' || 
            c == 'i' || c == 'I' ||
            c == 'o' || c == 'O' ||
            c == 'u' || c == 'U');
}

int countVowel(const string &s, int index) {
    if (index == s.size()) {
        return 0;
    }
    
    int count = isVowel(s[index]) ? 1 : 0; 
    return count + countVowel(s, index + 1);
}

int main() {
    string s;
    getline(cin, s);
    cout << countVowel(s, 0) << "\n";
    return 0;
}
