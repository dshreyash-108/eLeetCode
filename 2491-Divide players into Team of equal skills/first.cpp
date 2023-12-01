class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n = skill.size();
        if(n%2 != 0){
            return -1;
        }
        sort(skill.begin(), skill.end());
        
        int i = 0, j = n-1;
        int skeel = skill[0]+skill[n-1];
        while(i<j){
            if(skill[i]+skill[j]!=skeel){
                return -1;
            }
            i++;  
            j--;  
        }
        int p = 0, q = n-1;
        long long product = 0;
        while(p<q){
            product += skill[p]*skill[q];
            p++;
            q--;
        }
        return product;
        
    }
};