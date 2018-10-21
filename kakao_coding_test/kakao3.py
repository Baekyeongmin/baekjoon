class queue:
    def __init__(self, size):
        self.size = size
        self.q =[" "]*self.size
        self.num = 0
    
    def move(self):
        for i in range(1,self.size):
            self.q[i - 1] = self.q[i]
        if(self.num>0):
            self.num -= 1


    def put(self, in_str):
        if self.num < self.size:
            self.q[self.num] = (in_str.lower())
            self.num +=1
        else:
            self.move()
            if self.num < self.size:
                self.q[self.num] = (in_str.lower())
                self.num +=1
    
    def find(self, target):
        if(self.num>0):
            for i in range(self.num):
                if self.q[i] == target.lower():
                    return True
        return False


if __name__ == "__main__":
    cacheSize = input()
    cities = input()

    cache = queue(cacheSize)

    result_time = 0

    for i in (cities):
        if cache.find(i.lower()):
            result_time += 1
        else:
            result_time += 5
        cache.put(i.lower())
        #print(cache.num, cache.q)
    
    print(result_time)
        

