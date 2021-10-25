#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int brown, int yellow)
{
    vector<int> answer;
    int total = brown + yellow;

    for (int i = total; i > 0; i--)
        for (int j = 3; j * i <= total; j++)
        {
            if (i * j == total && (i - 2) * (j - 2) == yellow)
            {
                answer.push_back(i);
                answer.push_back(j);
                return answer;
            }
        }
    return answer;
}
