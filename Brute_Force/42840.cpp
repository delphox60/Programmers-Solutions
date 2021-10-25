#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers)
{
    vector<int> answer = {};

    vector<int> answer1 = {1, 2, 3, 4, 5};
    vector<int> answer2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> answer3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

    int n1 = 0;
    int n2 = 0;
    int n3 = 0;

    for (int i = 0; i < answers.size(); i++)
    {
        if (answers[i] == answer1[i % 5])
            n1++;
        if (answers[i] == answer2[i % 8])
            n2++;
        if (answers[i] == answer3[i % 10])
            n3++;
    }

    if (n1 >= n2 && n1 >= n3)
        answer.push_back(1);
    if (n2 >= n1 && n2 >= n3)
        answer.push_back(2);
    if (n3 >= n2 && n1 <= n3)
        answer.push_back(3);

    return answer;
}