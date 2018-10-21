
def parse_str(input_str):
    result = []
    for i in range(len(input_str)-1):
        tmp1 = input_str[i]
        tmp2 = input_str[i+1]
        if(tmp1.lower() != tmp1.upper() and tmp2.lower() != tmp2.upper()):
            result.append(tmp1.lower()+tmp2.lower())
    return result
        
def find_zacard(lst1, lst2):
    intersection = []

    i = 0
    j = 0

    while(True):
        if len(lst2) == 0 or len(lst1) == 0:
            break
        
        if j >= len(lst2):
            i += 1
            if i >= len(lst1):
                break
            else:
                j = 0
        #print(i,j, (lst1), (lst2), len(lst1), len(lst2))

        if lst1[i] == lst2[j]:
            intersection.append(lst1[i])
            del lst1[i]
            del lst2[j]
            j = 0
        else:
            j += 1
        # print(i,j, (lst1), (lst2), len(lst1), len(lst2))
        # print('----------------------------------------')
    try:
        zacard = len(intersection)/float(len(intersection)+len(lst1)+len(lst2))
    except:
        zacard = 1
    
    return int(zacard * 65536)




if __name__ == "__main__" :
    str1 = raw_input()
    str2 = raw_input()

    str_list1 = parse_str(str1)
    str_list2 = parse_str(str2)

    print(str_list1)
    print(str_list2)

    print(find_zacard(str_list1, str_list2))



    
        

