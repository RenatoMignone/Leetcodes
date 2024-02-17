
def removeDuplicates(nums):
    nums = list(set(nums))
    return nums

lista = [1,1,2]
k= removeDuplicates(lista)
print(k)