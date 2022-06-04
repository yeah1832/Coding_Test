#include <string>
#include <vector>
#include <unordered_map> //정렬을 필요로 하지 않으므로, 성능상 unordered 사용
#include <unordered_set>
using namespace std;



vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    unordered_map<string, unordered_set<string>> reportHash;
    unordered_map<string, unordered_set<string>> resultHash;
    
    for(string r: report){
        int pos = r.find(' '); //공백의 위치를 찾음
        string user = r.substr(0, pos); // 신고 유저 (처음부터 공백 전 위치까지)
        string bad = r.substr(pos+1); // 불량 유저 (공백 다음 부터 끝까지)
        reportHash[user].insert(bad);
        resultHash[bad].insert(user);            
    }
    vector<int> answer(id_list.size()); //사용자 크기만큼 vector 생성
    for(int i = 0; i < id_list.size(); ++i){
        string user = id_list[i];
        auto it = reportHash.find(user);
        if (it == reportHash.end()) continue; //신고 이력이 없는 경우 
        
        for(string bad : it->second){ //두번째 요소(불량유저)에 접근
            if(resultHash[bad].size() >= k){ //신고당한 횟수
                answer[i]++;
            }
        }
    }
    return answer;
}
