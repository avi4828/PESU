def sum_avg(l):
    sum = 0
    for i in range(len(l)):
        sum += l[i]
    avg = sum/len(l)
    return(sum,avg)

l=[1,2,3,4,5,6,7,8,9,10]
a,b = sum_avg(l)
print(f'sum:{a}, avg:{b}')