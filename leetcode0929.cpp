class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        for (auto &s: emails){
            auto at = find(begin(s), end(s), '@');
            auto last = remove(begin(s), at, '.');
            if (last != at) {
                s.erase(last, at);
            }
            at = find(begin(s), end(s), '@');
            last = find(begin(s), at, '+');
            if (last != at) {
                s.erase(last, at);
            }
        }
        sort(begin(emails), end(emails));
        auto last = unique(begin(emails), end(emails));
        emails.erase(last, end(emails));
        return emails.size();
    }
};
