#include <iostream>
#include <vector>
#include <unordered_map>


bool canCross(
        const std::vector<int>& stones,
        std::unordered_map<int, std::vector<int>::iterator>& pvJump_stone) {

    std::unordered_map<int, std::vector<int>::iterator> new_pvJump_stone;
    for (const auto& node : pvJump_stone) {
        for (auto stone_i=node.second + 1; stone_i != stones.end(); ++stone_i) {
            int jump = *stone_i - *node.second;
            if (jump == node.first || jump == node.first + 1 || jump == node.first - 1) {
                new_pvJump_stone[jump] = stone_i;
            }
        }
    }

    pvJump_stone=new_pvJump_stone;


    for (const auto& node : new_pvJump_stone) {
        if (node.second == stones.end()-1) {
            return true;
        }
    }
    return false;


}



int main() {
    std::vector<int> stones = {0, 1, 3, 5, 6, 8, 12, 17 ,19, 21, 26};
    int first_jump=1;
    std::unordered_map<int, std::vector<int>::iterator> pvJump_stone = {{first_jump, stones.begin()}};

    std::string answer="No";
    for (int i = 1; i < stones.size(); ++i) {


        if (canCross(stones, pvJump_stone)) {
            answer = "Yes";
            break;
        }

    }


    std::cout << "Can the frog cross the river? " << answer << std::endl;


    return 0;
}
