class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int n1=m-1,n2=n-1,i=m+n-1;
        while(n1>=0 && n2>=0){88. Merge Sorted Array
            if(nums1[n1] > nums2[n2]){
                nums1[i]=nums1[n1];
                n1--;
                i--;
            }
            else{
                nums1[i]=nums2[n2];
                n2--;
                i--;
            }
        }
        while(n2>=0){                   //不用看n1是因為n1前面本來就排好了
            nums1[i]=nums2[n2];
            i--;
            n2--;
        }
    }
};
