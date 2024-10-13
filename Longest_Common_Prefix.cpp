
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // 예외 처리: 문자열 배열이 비어 있을 경우 빈 문자열 반환
        if (strs.empty()) return "";

        // 첫 번째 단어를 기준으로 비교 시작
        string prefix = strs[0];

        // 나머지 단어들과 비교
        for (int i = 1; i < strs.size(); ++i) {
            string currentWord = strs[i];

            // 접두사가 일치하는 한 접두사를 점점 줄여감
            int j = 0;
            while (j < prefix.size() && j < currentWord.size() && prefix[j] == currentWord[j]) {
                j++;
            }

            // 접두사를 줄인 후 저장
            prefix = prefix.substr(0, j);

            // 공통 접두사가 없으면 빈 문자열 반환
            if (prefix.empty()) return "";
        }

        return prefix;
    }
};
