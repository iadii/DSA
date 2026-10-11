#include<bits/stdc++.h>
bool canFinish(const vector<int>& piles, int h, int k) {
        long long totalHrs = 0;
        for(int i = 0; i < piles.size(); i++){
            totalHrs += ceil(piles[i] / double(k));
        }
        return totalHrs <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int s = 1;
        int e = *max_element(piles.begin(), piles.end());
        int ans = 0;
        while(s <= e){
            int mid = (s+e)>>1;
            int k = mid;
            if(canFinish(piles, h, k)){
                ans = k;
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        return ans;
    }
int main () {
//    vector<int> piles = {30,11,23,4,20};
   vector<int> piles = {3,6,7,11};
   int h = 8;
   int ans = minEatingSpeed(piles, h);
    cout << "Koko should eat " << ans << " bananas per hour to finish before the guard returns.";
   return 0;
}