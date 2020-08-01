def findString(query, storage):
    if query in storage:
        return "yes"
    return "no"

def dictionary(arr_op):
    res = []
    storage = []
    for i in arr_op:
        command = i[:4]
        if command == find:
            query = i[6:]
            