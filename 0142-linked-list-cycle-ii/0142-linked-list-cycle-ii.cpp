/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* temp = head;
        map<ListNode* , int>np;
        while(temp){
            int index=1;
            if(np.find(temp) != np.end() ){
                return temp;
            }
            np[temp]= index;
            index++;
            temp=temp->next;
        }
        return {};
    }
};