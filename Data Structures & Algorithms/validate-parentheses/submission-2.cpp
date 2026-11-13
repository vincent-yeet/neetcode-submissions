class Solution {
public:
    bool isValid(string s) {
        std::stack<char> checked_chars;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' or s[i] == '[' or s[i] == '{') {
                checked_chars.push(s[i]);
            } else {
                if (checked_chars.empty()) {
                    return false;
                } else if ((checked_chars.top() == '(' and s[i] == ')')
                  or (checked_chars.top() == '[' and s[i] == ']')
                  or (checked_chars.top() == '{' and s[i] == '}')) {
                    checked_chars.pop();
                } else {
                    return false;
                }
            }
        }
        if (checked_chars.empty()) {
            return true;
        } else return false;
        
    }
};
