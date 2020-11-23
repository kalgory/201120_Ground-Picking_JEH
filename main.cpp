#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int> > land)
{
    int answer = 0;
        N = len(land)

        for i in range(0, N - 1) :

            land[i + 1][0] += max(land[i][1], land[i][2], land[i][3])
           
            land[i + 1][1] += max(land[i][0], land[i][2], land[i][3])

            land[i + 1][2] += max(land[i][0], land[i][1], land[i][3])

            land[i + 1][3] += max(land[i][0], land[i][1], land[i][2])

            answer = max(land[N - 1])  
            answer = max(land[N - 1][0], land[N - 1][1], land[N - 1][2], land[N - 1][3])
    return answer;
}
int main() { 
   
}

