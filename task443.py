"""
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
"""

class A:
    def __init__(self, arr = None):
        self.arr = [] if arr is None else arr

    def __len__(self):
        return len(self.arr)

    def __getitem__(self, index):
        return self.arr[index]

    def __eq__(self, element):
        return str(self) == str(element)

    def __str__(self):
        res = "("
        for i in self.arr:
            res += str(i)
        res += ")"
        return res

    def append(self, element):
        self.arr.append(element)

    def pop(self, index):
        return self.arr.pop(index)

class Solution(object):
    def __init__(self):
        self.variants = set()

    def func(self, a):
        for i in range(len(a)):
            z = i
            b = copy.deepcopy(a)
            j = 0
            while (len(b) > 1):
                if (z != j):
                    if (z > j):
                        z -= 1
                    k = b.pop(j)
                    b[z].append(k)
                    if str(b) not in self.variants:
                        self.func(b)
                        self.variants.add(str(b))
                else:
                    j += 1

    def generateParenthesis(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        a = A([A() for _ in range(n)])
        
        self.func(a)
        
        res = [str(a)[1:-1]]

        for i in self.variants:
            res.append(str(i)[1:-1])

        return res
