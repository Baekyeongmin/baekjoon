def parse(input_str):
    tmp = input_str.split(" ")
    hour = int(tmp[1][:2])
    minute = int(tmp[1][3:5])
    second = float(tmp[1][6:])

    process = float(tmp[2][:-1])
    
   
    end_time = hour * 3600 + minute * 60 + second
    st_time = end_time - process + 0.001
    return st_time, end_time


if __name__ == "__main__":
    lines = input()

    st_time = []
    end_time = []
    for i in lines:
        st, end = parse(i)
        st_time.append(st)
        end_time.append(end)

    print(st_time)
    print(end_time)

    result = []

    for i in range(len(end_time)):
        count = 0
        tmp_end = end_time[i]
        tmp_range = tmp_end - 3
        st_index = 0
        for j in range(i,-1,-1):
            if end_time[j] < tmp_range:
                st_index = j+1
        #print(st_index)
        
        for j in range(st_index,i):
            if end_time[j]>= st_time[i]:
                count += 1
        result.append(count+1)

        tmp_range_2 = tmp_end - 1
        tmp_range_3 = tmp_end + 1
        
        count_left = count
        count_right = count

        for j in range(st_index,i):
            if end_time[j]>= tmp_range_2:
                count += 1
        

    for i in range(len(st_time)):
        min_st
    print(result)
    print(max(result))
    

    



[ "2016-09-15 01:00:04.002 2.0s", "2016-09-15 01:00:07.000 2s" ]
[ "2016-09-15 20:59:57.421 0.351s", "2016-09-15 20:59:58.233 1.181s", "2016-09-15 20:59:58.299 0.8s", "2016-09-15 20:59:58.688 1.041s", "2016-09-15 20:59:59.591 1.412s", "2016-09-15 21:00:00.464 1.466s", "2016-09-15 21:00:00.741 1.581s", "2016-09-15 21:00:00.748 2.31s", "2016-09-15 21:00:00.966 0.381s", "2016-09-15 21:00:02.066 2.62s" ]