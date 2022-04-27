/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

#include <iostream>
#include <vector>


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        if(l1->val < l2->val){
            l1->next = mergeTwoLists(l1->next,l2);
            return l1;
        }else{
            l2->next = mergeTwoLists(l1,l2->next);
            return l2;
        }
    }

    int main(int argc, char const *argv[])
    {
        ListNode* l1=buildNode({1,2,4},0);
        ListNode* l2=buildNode({1,3,4},0);
        ListNode* l3=Solution().mergeTwoLists(l1,l2);
        while (l3)
        {
            std::cout<<l3->val;
            l3=l3->next;
        }
        
        return 0;
    }
    
    ListNode* buildNode(std::vector<int> arr , int i){
        if(i>arr.size())
            return nullptr;

        return new ListNode(arr[i],buildNode(arr,i+1));
    }
};