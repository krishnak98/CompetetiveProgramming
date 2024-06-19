def chk(list1 , list2, tens, units):
    if (tens in list1 and units in list2) or (tens in list2 and units in list1):
        return True
    return False
    
def can_form_two_digit(list1, list2):
    if 6 in list1 and 9 not in list1:
        list1.append(9)
    if 9 in list1 and 6 not in list1: 
        list1.append(6)
    if 6 in list2 and 9 not in list2:
        list2.append(9)
    if 9 in list2 and 6 not in list2: 
        list2.append(6)
    numbers = [(0,1),(0,4),(0,9),(1,6),(2,5),(3,6),(4,9),(6,4),(8,1)]
    for (units, tens) in numbers:
        if not chk(list1, list2, tens, units):
            return False
    return True

def get_set_bit_indices(n):
    indices = []
    i = 0
    while n > 0:
        if n & 1:
            indices.append(i)
        n >>= 1
        i += 1
    return indices


ans = 0
for i in range(1024):
    dic = {}
    cubea = get_set_bit_indices(i)
    if len(cubea) != 6: 
        continue
    for j in range(i):
        cubeb = get_set_bit_indices(j)
        if len(cubeb) != 6:
            continue
        if can_form_two_digit(cubea, cubeb):
            print(cubea, cubeb)
            ans += 1

print(ans)