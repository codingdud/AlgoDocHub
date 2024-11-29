class Solution {
public:
    int validQueries(string text, string pattern, int q, vector<vector<int>> &queries) {
        int n = text.size();
        // Initialize prefix sums for each character 'a' to 'z'
        vector<vector<int>> prefix(26, vector<int>(n + 1, 0));
        
        for(int i = 0; i < n; ++i){
            for(int c = 0; c < 26; ++c){
                prefix[c][i + 1] = prefix[c][i];
            }
            // Increment the count for the current character
            prefix[text[i] - 'a'][i + 1]++;
        }
        
        // Compute total frequency of each character in text
        vector<int> totalFreq(26, 0);
        for(char c : text){
            totalFreq[c - 'a']++;
        }
        
        // Compute frequency of each character in pattern
        vector<int> patternFreq(26, 0);
        for(char c : pattern){
            patternFreq[c - 'a']++;
        }
        
        // Initialize the count of valid queries
        int count = 0;
        
        // Process each query
        for(auto &query : queries){
            int l = query[0];
            int r = query[1];
            // Compute masked frequency for each character
            bool valid = true;
            for(int c = 0; c < 26; ++c){
                // Number of times character c appears in [l, r]
                int masked = prefix[c][r + 1] - prefix[c][l];
                // Available frequency after masking
                int available = totalFreq[c] - masked;
                // Check if available frequency is sufficient for the pattern
                if(available < patternFreq[c]){
                    valid = false;
                    break;
                }
            }
            if(valid){
                count++;
            }
        }
        
        return count;
    }
};