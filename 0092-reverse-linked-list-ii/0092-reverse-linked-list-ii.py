# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseBetween(self, head: Optional[ListNode], left: int, right: int) -> Optional[ListNode]:
        dummy = ListNode(0, head)
        before = dummy

        # iterate until we are standing ont the left node that needs to reverse
        for i in range(1, left):
            before = before.next

        # create pointers to the current node and the node before it
        # make the current node.next to point to the previous node
        prev = before
        curr = before.next
        for i in range(left, right + 1):
            next_node = curr.next
            curr.next = prev
            prev = curr
            curr = next_node

        # correct the tail of the list
        before.next.next = curr  # connects the end of the reversed sublist to the curr node.
        before.next = prev  # connects the node before the left position to the prev node.

        return dummy.next


        