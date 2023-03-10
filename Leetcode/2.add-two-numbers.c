/*
 * @lc app=leetcode id=2 lang=c
 *
 * [2] Add Two Numbers
 *
 * https://leetcode.com/problems/add-two-numbers/description/
 *
 * algorithms
 * Medium (40.06%)
 * Likes:    23862
 * Dislikes: 4609
 * Total Accepted:    3.4M
 * Total Submissions: 8.4M
 * Testcase Example:  '[2,4,3]\n[5,6,4]'
 *
 * You are given two non-empty linked lists representing two non-negative
 * integers. The digits are stored in reverse order, and each of their nodes
 * contains a single digit. Add the two numbers and return the sum as a linked
 * list.
 * 
 * You may assume the two numbers do not contain any leading zero, except the
 * number 0 itself.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: l1 = [2,4,3], l2 = [5,6,4]
 * Output: [7,0,8]
 * Explanation: 342 + 465 = 807.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: l1 = [0], l2 = [0]
 * Output: [0]
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
 * Output: [8,9,9,9,0,0,0,1]
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * The number of nodes in each linked list is in the range [1, 100].
 * 0 <= Node.val <= 9
 * It is guaranteed that the list represents a number that does not have
 * leading zeros.
 * 
 * 
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* head = NULL, *result = head;
    int carry=0;
    while(l1!=NULL || l2!=NULL || carry!=0){
        int x=0, y=0;
        if(l1){
            x=l1->val;
            l1=l1->next;
        }
        if(l2){
            y=l2->val;;
            l2=l2->next;
        }
        int sum=x+y+carry;
        carry=sum/10;
        /*head = (struct ListNode*)malloc(sizeof(struct ListNode));
        head->val=sum%10;
        head->next=NULL;
        head=head->next;*/
        if(head==NULL){
            head = (struct ListNode*)malloc(sizeof(struct ListNode));
            head->val=sum%10;
            head->next=NULL;
            result=head;
        }
        else{
            head->next=(struct ListNode*)malloc(sizeof(struct ListNode));
            head->next->val=sum%10;
            head=head->next;
        }
    }
    head->next=NULL;
    return result;
}
// @lc code=end

