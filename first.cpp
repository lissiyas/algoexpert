#include <iostream>
#include <vector>
#include <string>

#include <algorithm>

using namespace std;

// 1, 1+2, 1+2+3,

int main()
{

    vector<int> numbers = {1, 7, 3, 6, 5, 6};
    int targetSum = 10;
    vector<int> index;

    for(int i = 0;i<numbers.size();i++){
        for(int k = 0;k<numbers.size();k++){

            if(targetSum==numbers[i]+numbers[k]){
                index.push_back(numbers[i]);
                index.push_back(numbers[k]);
            }
        }
    }

    s
}
