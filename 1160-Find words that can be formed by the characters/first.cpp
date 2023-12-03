class Solution {
public:
    int countCharacters(std::vector<std::string>& words, std::string chars) {
        std::unordered_map<char, int> m;
        int count = 0;

        // Count characters in chars
        for (char c : chars) {
            m[c]++;
        }

        // Check each word
        for (const std::string& word : words) {
            std::unordered_map<char, int> tempMap(m);  // Create a copy of the original map

            bool canForm = true;
            for (char c : word) {
                if (tempMap.find(c) == tempMap.end() || tempMap[c] == 0) {
                    canForm = false;
                    break;
                } else {
                    tempMap[c]--;
                }
            }

            // If the word can be formed, add its length to the count
            if (canForm) {
                count += word.size();
            }
        }

        return count;
    }
};