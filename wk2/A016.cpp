#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit)
{
    int count = 0;

    sort(people.begin(), people.end());

    int front, rear;
    front = 0;
    rear = people.size() - 1;

    int fe, re;

    while (front <= rear)
    {
        fe = people.at(front);
        re = people.at(rear);

        if (fe + re <= limit)
        {
            count++;
            front++;
            rear--;
            continue;
        }

        if (fe + re > limit)
        {
            count++;
            rear--;
            continue;
        }
    }

    return count;
}