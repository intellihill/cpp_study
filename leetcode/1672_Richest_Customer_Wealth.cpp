#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        for (const auto row : accounts) {
            for (int val : row) {
                nums += val;
            }
            cout << "max: " << max << "nums: " << nums << endl;
            if (nums >= max) {
                max= nums;
            }
            nums= 0;
        }
        cout << max << endl;
        return 0;
    }
private:
    int nums= 0;
    int max= 0;
};

int main() {

    std::vector<vector<int>> array = {
        {1, 2},
        {3, 4},
        {2, 3}
    };

    Solution solution;
    solution.maximumWealth(array);

    return 0;
}