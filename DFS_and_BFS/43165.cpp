#include <string>
#include <vector>

using namespace std;

int answer = 0;

void bt(vector<int> &v, int target, vector<int> &nums)
{
    int n = nums.size();
    if (v.size() == n)
    {
        int result = 0;
        for (int i = 0; i < n; i++)
            result += v[i];
        if (result == target)
            answer++;
        return;
    }

    int idx = v.size();

    v.push_back(nums[idx]);
    bt(v, target, nums);
    v.pop_back();
    v.push_back((-1) * nums[idx]);
    bt(v, target, nums);
    v.pop_back();
    return;
}

int solution(vector<int> numbers, int target)
{
    vector<int> v;
    bt(v, target, numbers);
    return answer;
}
