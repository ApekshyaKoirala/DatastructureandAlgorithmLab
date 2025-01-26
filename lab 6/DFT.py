G={
    'A':['N','Q'],
    'N':['A','S','B'],
    'Q':['A','M','C'],
    'S':['N'],
    'B':['N'],
    'M':['Q'],
    'C':['Q']

}

def DFT(G,start):
    stack=list()
    visited=list()
    stack.append(start)
    while(stack):
        poppedVertex=stack.pop()
        visited.append(poppedVertex)
        print(poppedVertex)
        for ximeki in G[poppedVertex]:
            if ximeki not in stack and ximeki not in visited:
                stack.append(ximeki)
    return visited
start='A'
visited=DFT(G,start)