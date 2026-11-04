class MinStack:

    def __init__(self):
        self.S = []
        self.minS = []

    def push(self, val: int) -> None:
        self.S.append(val)
        if not self.minS or val <= self.minS[-1]:
            self.minS.append(val)

    def pop(self) -> None:
        if self.S.pop() == self.minS[-1]:
            self.minS.pop()

    def top(self) -> int:
        return self.S[-1]

    def getMin(self) -> int:
        return self.minS[-1]