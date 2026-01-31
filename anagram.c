#include <stdbool.h>

bool isAnagram(char * s, char * t) {
    int freq[26] = {0};
    int i = 0;

    while (s[i]) {
        freq[s[i] - 'a']++;
        i++;
    }

    i = 0;
    while (t[i]) {
        freq[t[i] - 'a']--;
        i++;
    }

    for (i = 0; i < 26; i++)
        if (freq[i] != 0)
            return false;

    return true;
}

