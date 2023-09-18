#include <string>
#include <vector>
#include <cstring>
using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    string nts;
    bool count;
    for(int i = l; i <= r; i++)
    {
        nts = to_string(i);
        count = true;
        for(int j = 0; j < nts.size(); j++)
        {         
            if(nts[j] != '0' && nts[j] != '5')
            {
                count = false;
                break;
            }
        } 
        if(count) answer.push_back(i);   
    }
    if(answer.empty()) answer.push_back(-1);
  
    return answer;
}
