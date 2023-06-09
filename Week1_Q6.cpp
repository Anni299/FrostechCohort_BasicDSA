class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        vector<int> cnt(n, 0);
        for(int i = 0; i < n; i++){ 
            switch(s[i]){
                case 'I':
                    cnt[i] = 1;
                    break;
                case 'V':
                    cnt[i] = 5;
                    break;
                case 'X':
                    cnt[i] = 10;
                    break;
                case 'L':
                    cnt[i] = 50;
                    break;
                case 'C':
                    cnt[i] = 100;
                    break;
                case 'D':
                    cnt[i] = 500;
                    break;
                case 'M':
                    cnt[i] = 1000;
                    break;
            }
        }
        int sum = 0;
        for(int i = 0; i < n - 1; i++) {
            if(cnt[i] >= cnt[i+1]){
                sum += cnt[i];
            }
            else {
                sum -= cnt[i];
            }
        }
        sum += cnt[n-1];
        return sum;
    }
};  
