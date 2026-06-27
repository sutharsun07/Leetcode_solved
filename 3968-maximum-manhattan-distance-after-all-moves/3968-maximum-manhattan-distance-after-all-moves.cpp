class Solution {
public:
    int maxDistance(string moves) {
        int x = 0, y = 0, wild = 0;
        for (char c : moves) {
            if (c == 'U'){ 
                ++y;
            }
            else if (c == 'D'){ 
                --y;
            }
            else if (c == 'R'){
                 ++x;
            }
            else if (c == 'L'){ 
                --x;
            }
            else{ 
                ++wild;
            }
        }
        return abs(x) + abs(y) + wild;
    }
};