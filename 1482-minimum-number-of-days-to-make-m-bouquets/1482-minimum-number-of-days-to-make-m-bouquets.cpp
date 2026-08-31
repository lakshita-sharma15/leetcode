class Solution {
public:

    bool canMakeBouquets(vector<int>& bloomDay, int m, int k, int day) {
        int bouquets = 0;
        int consecutiveFlowers = 0;
        
        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= day) {
                consecutiveFlowers++;
 
                if (consecutiveFlowers == k) {
                    bouquets++;
                    consecutiveFlowers = 0; 
                }
            } else {
                consecutiveFlowers = 0;
            }
        }
        
        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
       
        if ((long long)m * k > n) {
            return -1;
        }
  
        int low = 1;
        int high = 1;
        for (int day : bloomDay) {
            high = max(high, day);
        }
        
        int min_days = -1;
    
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (canMakeBouquets(bloomDay, m, k, mid)) {
                min_days = mid;      
                high = mid - 1;      
            } else {
                low = mid + 1;      
            }
        }
        
        return min_days;
    }
};