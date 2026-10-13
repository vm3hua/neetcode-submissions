class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;
        for(int i = 0; i < position.size(); i++) cars.push_back({position[i], speed[i]});
        sort(cars.begin(), cars.end());
        int fleet = 0;
        double prevTime = 0;
        for(int j = position.size() - 1; j >= 0; j--){
            double time = (double)(target - cars[j].first) / cars[j].second;
            if(time > prevTime){
                fleet++;
                prevTime = time;
            }
        }
        return fleet;
    }
};