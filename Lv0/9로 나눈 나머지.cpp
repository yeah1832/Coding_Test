#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0;
    int sum = 0;
    for(int i = 0; i < number.size(); i++)
    {
        sum += (int)(number[i]-48);
    }
    answer = sum % 9;
    return answer;
}
