def reverseBits(self, n: int) -> int:
    ciao = str(n)
    stack = []
    for c in ciao:
        stack.append(c)
    return int("".join(list(reversed(stack))))
            
print(reverseBits("ciao", 1010101010101010))
         