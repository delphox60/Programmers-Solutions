#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int n, vector<vector<int>> computers)
{
    int answer = 0;
    queue<int> q;

    bool visited[n];
    for (int i = 0; i < n; i++)
        visited[i] = false;

    for (int i = 0; i < n; i++)
    {
        if (visited[i])
            continue;

        answer++;

        q.push(i);
        visited[i] = true;

        while (!q.empty())
        {
            int cur = q.front();
            q.pop();

            for (int j = 0; j < n; j++)
            {
                if (!visited[j] && computers[cur][j])
                {
                    q.push(j);
                    visited[j] = true;
                }
            }
        }
    }

    return answer;
}
