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
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* traveler = head;
        int ix = 1, counter=0;
        while(traveler -> next != nullptr){
            ix += 1;
            traveler = traveler ->  next;
        }
        traveler = head;
        while(counter++ < (ix/2))
            traveler = traveler ->  next;
        return traveler;
    }
};