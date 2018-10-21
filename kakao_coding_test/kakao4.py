
def convert_to_min(HHMM):
    hour = int(HHMM[:2])
    minute = int(HHMM[3:])
    return hour*60+minute

def convert_to_HHMM(time):
    result = ""
    hour = time//60
    minute = time % 60
    if(hour<10):
        result += "0"
    result += str(hour)
    result += ":"
    if(minute<10):
        result += "0"
    result += str(minute)
    return result

if __name__ == "__main__":
    n = input()
    t = input()
    m = input()
    time_table = input()

    last_bus_cap = []
    bus_cap = [m]*n
    num_of_wait = len(time_table)
    start_time = []
    st = convert_to_min("09:00")
    
    for i in range(n):
        start_time.append(st)
        st += t
    
    for i in range(num_of_wait):
        time_table[i] = convert_to_min(time_table[i])
    
    time_table.sort()

    now_bus = 0
    now_index = 0
    while(True):

        if now_bus >= n or now_index >= num_of_wait:
            break
        
        if(time_table[now_index]<=start_time[now_bus]):
            if(bus_cap[now_bus]>0):
                bus_cap[now_bus] -= 1
                if now_bus == n-1:
                    last_bus_cap.append(time_table[now_index])
                now_index += 1
            else:
                now_bus += 1
        else:
            now_bus += 1
        # print(now_index, now_bus, bus_cap[now_bus])
    
    print(bus_cap)
    print(last_bus_cap)

    result = 0    
    if(bus_cap[n-1]>0):
        result = start_time[-1]
    else:
        result = last_bus_cap[-1]-1
    

    

    print(convert_to_HHMM(result))