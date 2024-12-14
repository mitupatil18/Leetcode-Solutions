class Solution {
public:
    int ladderLength(string beginWord, string endWord,
                     vector<string>& wordList) {
        unordered_set<string> s(wordList.begin(), wordList.end());
        if (s.find(endWord) == s.end())
            return 0;
        queue<string> q;
        q.push(beginWord);
        int ladderLength = 1;
        while (!q.empty()) {
            int levelSize = q.size();
            for (int i = 0; i < levelSize; i++) {
                string currentWord = q.front();
                q.pop();

                for (int j = 0; j < currentWord.size(); j++) {
                    string transformedWord = currentWord;

                    for (char c = 'a'; c <= 'z'; c++) {
                        transformedWord[j] = c;

                        if (transformedWord == endWord) {
                            return ladderLength + 1;
                        }

                        if (s.find(transformedWord) != s.end()) {
                            q.push(transformedWord);
                            s.erase(transformedWord);
                        }
                    }
                }
            }

            ladderLength++;
        }

        return 0;
    }
};
