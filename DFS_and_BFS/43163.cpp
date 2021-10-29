#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<bool> visited(50, false);
int answer = 55;

bool check(string s1, string s2)
{
    int wr = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
            wr++;
    }
    if (wr == 1)
        return true;
    return false;
}

void func(string cur, vector<string> &words, string tar, int k)
{
    if (tar == cur)
    {
        answer = min(answer, k);
    }

    for (int i = 0; i < words.size(); i++)
    {
        if (!visited[i] && check(cur, words[i]))
        {
            visited[i] = true;
            func(words[i], words, tar, k + 1);
            visited[i] = false;
        }
    }
}

int solution(string begin, string target, vector<string> words)
{
    func(begin, words, target, 0);
    if (answer == 55)
        return 0;
    else
        return answer;
}
