#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    string nts;
    int count = 0;
    for(int i = l; i <= r; i++)
    {
        nts = to_string(i);
        count = 0;
        for(int j = 0; j < nts.size(); j++)
        {         
            if(nts[j] == '0' || nts[j] == '5')
            {
                count++;
            }else break;
            if(count == nts.size()) answer.push_back(i);
        }  
    }
    if(count == 0) answer.push_back(-1);
    return answer;
}
