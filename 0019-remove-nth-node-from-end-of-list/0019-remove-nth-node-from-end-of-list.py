# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        temp_head = ListNode(0)
        temp_head.next = head
        first = temp_head
        second = temp_head

        # Step 2: Advance the first pointer n + 1 steps ahead
        for _ in range(n + 1):
            first = first.next

        # Step 3: Move both pointers until first reaches the end
        while first is not None:
            first = first.next
            second = second.next

        # Step 4: Remove the nth node from the end
        second.next = second.next.next

        return temp_head.next
