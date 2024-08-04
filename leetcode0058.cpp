// c++
class Solution {
public:
    int lengthOfLastWord3(string s) {
        std::regex pattern(R"(\b\w+\b(?=\W*$))");
        std::smatch match;
        std::regex_search(s, match, pattern);
        return match.str().size();
    }

    // lengthOfLastWord("hello!") // 5 - npos == 6
    int lengthOfLastWord2(std::string s) {
        auto a = s.find_last_not_of(' ');
        auto b = s.find_last_of(' ', a);
        return a - b;
    }

    // lengthOfLastWord("hello!") // end(s) - 0 == 6
    int lengthOfLastWord(std::string s) {
        auto needle = ' ';
        auto a = find_if(crbegin(s), crend(s),
            [&needle](const auto &element){return element != needle;});
        auto b = find_if(a, crend(s),
            [&needle](const auto &element){return element == needle;});
        return b - a;
    }
};

// rust
impl Solution {
    pub fn length_of_last_word(s: String) -> i32 {
        let s = s.trim();
        if s.is_empty() {
            return 0;
        }
        let a = s.rfind(|c| c != ' ').unwrap() as i32;
        let b = s[..a as usize].rfind(|c| c == ' ').unwrap_or(usize::MAX) as i32;
        return a - b;
    }
}
