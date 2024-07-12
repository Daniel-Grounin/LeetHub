# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head:
            return None

        stack = []
        current = head

        while current:
            stack.append(current.val)
            current = current.next

        new_head = ListNode(stack.pop())
        current = new_head
        while stack:
            current.next = ListNode(stack.pop())
            current = current.next

        return new_head
