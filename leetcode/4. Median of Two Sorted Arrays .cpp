class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>new_v;
        for(int i=0;i<nums1.size();i++){
            new_v.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            new_v.push_back(nums2[i]);
        }
        // time limit exceeded here:
        sort(new_v.begin(),new_v.end());
        int len=new_v.size();
        if(len%2==0){
            double aa=new_v[len/2-1];
            double bb=new_v[len/2];
            cout<<aa<<" "<<bb<<endl;
            return aa+(bb-aa)/2;
            
        }
        else{
            return double( new_v[ len/2 ] );
        }
        return 0.00;
    }
};