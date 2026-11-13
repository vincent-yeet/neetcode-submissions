class Solution {
public:
    bool isPalindrome(string s) {
        int backwards_ptr = s.length() - 1;
        int forwards_ptr = 0;
        while (forwards_ptr < backwards_ptr) {
            bool a_alnum = std::isalnum(s[forwards_ptr]);
            bool b_alnum = std::isalnum(s[backwards_ptr]);
            if (!a_alnum or !b_alnum) {
                if (!a_alnum) {forwards_ptr++;}
                if (!b_alnum) {backwards_ptr--;}
            } else {
                if (std::isupper(s[forwards_ptr])) {
                    s[forwards_ptr] = std::tolower(s[forwards_ptr]);
                }
                if (std::isupper(s[backwards_ptr])) {
                    s[backwards_ptr] = std::tolower(s[backwards_ptr]);
                }
                if (s[forwards_ptr] != s[backwards_ptr]) {
                    return false;
                } else {
                    forwards_ptr++;
                    backwards_ptr--;
                }
            }
        }
        return true;
    }
};
