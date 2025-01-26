G={
    'A':['N','Q'],
    'N':['A','S','B'],
    'Q':['A','M','C'],
    'S':['N'],
    'B':['N'],
    'M':['Q'],
    'C':['Q']

}

def BFT(G,start):
    Queue=list()
    visited=list()
    Queue.append(start)
    while(Queue):
        Dequeue=Queue.pop(0)
        visited.append(Dequeue)
        print(Dequeue)
        for ximeki in G[Dequeue]:
            if ximeki not in Queue and ximeki not in visited:
                Queue.append(ximeki)
    return visited
start='A'
visited=BFT(G,start)