#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
	int answer = 0;
	sort(d.begin(), d.end());
	for (; answer < d.size(); answer++)
	{
		if (budget >= d[answer])
		{
			budget -= d[answer];
			continue;
		}
		break;
	}
	return answer;
}

void main()
{
	//test
	//auto ret = solution({2,2,3,3});
}