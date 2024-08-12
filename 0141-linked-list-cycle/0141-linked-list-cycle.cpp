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
    bool hasCycle(ListNode *head) {
        ListNode* temp = head;
        map<ListNode* , bool>np;
        while(temp){
            if(np.find(temp) != np.end() ){
                return true;
            }
            np[temp]= true;
            temp=temp->next;
        }
        return false;

    }
};