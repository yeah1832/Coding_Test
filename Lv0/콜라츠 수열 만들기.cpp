#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    while(true)
    {
        if(n % 2 == 0)
    {
        answer.push_back(n);
        n = n / 2 ;    
    }else
    {
        answer.push_back(n);
        if(n == 1) break;
        n = 3 * n + 1 ;   
    }
        
    }
    
    return answer;
}
