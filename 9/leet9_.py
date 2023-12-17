class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
        

def mergeTwoLists(list1, list2):
    if list1[len(list1)-1].val < list2[0].val:
        list1 = list1 + list2
    
    list1 = list1 + list2
    list1[len(list1)-1].next = list2[0]
    list2 = []

    for i in range(len(list1)):
        oggetto = getmax(list1)
        list1.remove(oggetto)
        # print(oggetto.val)
        if len(list2) != 0: 
            oggetto.next = list2[len(list2)-1]
        list2.append(oggetto)
    
    list2 = list(reversed(list2))
    return list2

    # print(list1[len(list1)-1].next.val)

def getmax(list):
    massimo = None
    for n in list:
        if massimo == None:
            massimo = n
        if n.val > massimo.val:
            massimo = n

    return massimo

nodo3 = ListNode(3)
nodo2 = ListNode(2,nodo3)
nodo1 = ListNode(1,nodo2)
list1 = [nodo1,nodo2,nodo3]

nodo6 = ListNode(4)
nodo5 = ListNode(3,nodo6)
nodo4 = ListNode(1,nodo5)
list2 = [nodo4,nodo5,nodo6]

# nodo3 = ListNode(3)
# nodo2 = ListNode(2,nodo3)
# nodo1 = ListNode(1,nodo2)
# list1 = [nodo1,nodo2,nodo3]

# nodo6 = ListNode(6)
# nodo5 = ListNode(5,nodo6)
# nodo4 = ListNode(4,nodo5)
# list2 = [nodo4,nodo5,nodo6]

mergeTwoLists(list1,list2)
