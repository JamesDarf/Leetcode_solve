class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int > key = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        }; // map

        int total = 0;

        for(int i = 0; i < s.length(); i++) {
            if (key[s[i]] < key[s[i+1]]) { // number of rigth case
                total -= key[s[i]];
            }
            else { // number of left cats
                total += key[s[i]];
            }
        }
    return total;
    }
};
