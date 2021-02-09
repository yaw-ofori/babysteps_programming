#include <iostream>
#include <vector>
#include <string>
#include <fstream>


bool checkMatch(std::string word1, std::string word2) {
    int matchCounter = 0;
    for (int i=0, len1 = word1.length(); i<len1; i++) {
        for (int j=0, len2=word2.length(); j < len2; j++) {
            if (word1[i] == word2[j]) {
                matchCounter++;
                break;
            }
        }
    }
    if (matchCounter == word1.length()) {
    return true;
    }
    return false;
}
std::vector<int> stringAnagram(std::vector<std::string> dictionary, std::vector<std::string> query) {
//get the various strings from the dictionary
std::vector<int> anagramCounter;
int counter = 0;

for(auto word : query)
{
    for(auto word2 : dictionary)
    {
        if (word.length() == word2.length()) {
            bool match = checkMatch(word, word2);
            if(match) counter++;
        }
    }
    anagramCounter.push_back(counter);
    counter = 0;
}

return anagramCounter;
}

int main()
{

    std::vector<std::string> dictionary = {"hack", "a", "rank", "khac", "ackh", "kran", "rankhacker", "a", "ab", "ba", "stairs", "raits"};
    std::vector<std::string> query = { "a", "nark", "bs", "hack", "stair"};

    std::vector<int> result = stringAnagram(dictionary, query);

    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i];

        if (i != result.size() - 1) {
            std::cout << "\n";
        }
    }

    std::cout << "\n";

    return 0;
}

