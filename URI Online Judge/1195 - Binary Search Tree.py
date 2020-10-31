# Reference http://ceadserv1.nku.edu/longa/classes/mat385_resources/docs/traversal.htm
C = int(input())

class Node:
    def __init__(self, value):
        self.left = None
        self.right = None
        self.value = value
    
def add_node(root, value):
    if root is None:
        return Node(value)
    
    if root.value < value:
        root.right = add_node(root.right, value)
    elif root.value > value:
        root.left = add_node(root.left, value)
    
    return root

def in_order(root):
    if root:
        in_order(root.left)
        print(f" {root.value}", end="")
        in_order(root.right)

def pre_order(root):
    if root:
        print(f" {root.value}", end="")
        pre_order(root.left)
        pre_order(root.right)

def post_order(root):
    if root:
        post_order(root.left)
        post_order(root.right)
        print(f" {root.value}", end="")

for case in range(C):
    N = int(input())
    nums = [int(i) for i in input().split()]
    
    '''
    Case: 5 2 7 9
    1st iteration: current = 5, add_node(5, 2)
    2nd iteration: current = 5, add_node(5, 7)
    3rd iteration: current = 5, add_node(5, 9)
    '''
    current = Node(nums[0])
    for i in nums[1:]:
        current = add_node(current, i)

    print(f"Case {case+1}:")
    print(f"Pre.:", end="")
    pre_order(current)
    print()
    print(f"In..:", end="")
    in_order(current)
    print()
    print(f"Post:", end="")
    post_order(current)
    print("\n")