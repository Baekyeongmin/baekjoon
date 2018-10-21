if __name__ == "__main__":
    inputs = (raw_input())
    score = [0]*3
    index = 0
    for i in range(9):
        if(i%3 == 0):
            if(inputs[index] == "1" and inputs[index+1] == "0"):
                score[i//3] = 10
                index += 2
            else:
                score[i//3] = int(inputs[index])
                index += 1
        elif(i%3 == 1):
            if(inputs[index] == "S"):
                pass
            elif(inputs[index] == "D"):
                score[i//3] = score[i//3]*score[i//3]
            elif(inputs[index]):
                score[i//3] = score[i//3]*score[i//3]*score[i//3]
            index += 1
        elif(i%3 ==2 and len(inputs)>index):
            if (inputs[index] == "*"):
                tmp = i//3
                it = 0
                while(tmp>=0 and it < 2):
                    score[tmp] *= 2
                    tmp -= 1
                    it += 1
                index += 1
            elif (inputs[index] == "#"):
                score[i//3] *= -1
                index+=1
        #print(i, index)
    #print(score)
    print(score[0]+score[1]+score[2])

                
        