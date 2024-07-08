class Solution {
public:
    int numRescueBoats(std::vector<int>& people, int limit) {
        sort(begin(people), end(people));
        const auto n = people.size();
        auto num = 0;
        for (int light = 0UL, heavy = n - 1; light <= heavy; ){
            if (people[light] + people[heavy] > limit){
                heavy--;
            } else {
                heavy--;
                light++;
            }
            num++;
        }
        return num;
    }
};
