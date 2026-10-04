class Solution {
public:
    int minRotations(string s) {
        int c = 0;
        int a = 0;
        
        for(int i=0; i<s.size(); i++){
            int b = s[i]-'0';
            int clo = abs(a-b);
            int ac = 10-clo;
            c += min(clo, ac);
            a = b;
        }
        return c;
    }
};©leetcode
