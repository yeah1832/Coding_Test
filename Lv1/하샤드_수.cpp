#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int sum = 0;
    int a = x;
    while(a!=0){
        sum += a % 10;
        a /= 10;
    }
    if(x % sum != 0 )
        answer = false;
    
    return answer;
}
