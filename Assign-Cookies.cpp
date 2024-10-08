// Leetcode - 455 Assign Cookies. 
// TC - O(N*logn) + O(M*logn) , SC = O(1)

class Solution {
public:
    int satisfy(vector<int>& child, vector<int> & cookie){
        int n = child.size();
        int m = cookie.size();
        int left = 0, right = 0;
        sort(child.begin(),child.end());
        sort(cookie.begin(),cookie.end());
        while(left<m && right < n){
            if(cookie[left] >= child[right]){
                right++;
            }
            left++;
        }
        return right;
    }
    int findContentChildren(vector<int>& g, vector<int>& s) {
        return satisfy(g,s);
    }
};
