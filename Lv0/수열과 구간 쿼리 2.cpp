#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    int tmp = 1000001;
    for(int i = 0; i < queries.size() ; i++)
    {
        for(int j = queries[i][0]; j <= queries[i][1]; j++)
        {
            if(arr[j] > queries[i][2])
            {
                if(tmp > arr[j]) tmp = arr[j];
            }    
        } 
        if(tmp == 1000001){
            tmp = -1;
        }
        answer.push_back(tmp);
        tmp = 1000001;
    }
    return answer;
}
