#include <string>

std::string longestPalindrome(std::string s) {
    int n = s.size();
    if (n == 0){ return ""; }
    int begin = 0;
    int end = 0;
    for (int i1 = 0; i1 != n - 1; i1++){
        for (int j1 = n - 1; j1 > i1; j1--){
            int i2 = i1;
            int j2 = j1;
            for ( ; i2 < j2; ){
                if (s[i2] != s[j2]){
                    break;
                }
                if (s[i2] == s[j2]){
                    i2++;
                    j2--;
                }
            }
            if (i2 == j2 || i2 == j2 + 1 || j2 == i2 - 1){
                if (j1 - i1 > end - begin){
                    begin = i1;
                    end = j1;
                }
            }
        }
    }
    return std::string(std::begin(s) + begin, std::begin(s) + end + 1);
}

#include <iostream>
int main(){
    std::cout << __LINE__ << ": " << longestPalindrome("babad") << "\n"; //bab
    std::cout << __LINE__ << ": " << longestPalindrome("cbbd") << "\n"; //bb
    std::cout << __LINE__ << ": " << longestPalindrome("") << "\n"; //
    std::cout << __LINE__ << ": " << longestPalindrome(" ") << "\n"; //
    std::cout << __LINE__ << ": " << longestPalindrome("a") << "\n"; //
    std::cout << __LINE__ << ": " << longestPalindrome("aa") << "\n"; //
    return 0;
}
