import math
G={
    'A':{'B':3,'C':1},
    'B':{'C':7,'A':3,'E':1,'D':5},
    'C':{'A':1,'B':7,'D':2},
    'D':{'C':2,'B':5,'E':7},
    'E':{'B':1,'D':7}
}
def Initialize_Single_Source(G,source):
    cost=dict()
    prev=dict()
    for vertex in G:
        cost[vertex]=math.inf
        prev[vertex]=' '
    cost[source]=0
    return cost, prev

def Relax(G,u,v,cost,prev):
    if cost[v]>cost[u]+G[u][v]:
        cost[v]=cost[u]+G[u][v]
        prev[v]=u
    return cost,prev

def Dikstra(G,source):
    cost,prev=Initialize_Single_Source(G,source)
    visited=set()
    while(len(visited)!=len(G)):
        currentV=find_least_cost_vertex(cost,visited)
        visited.add(currentV)
        for ximeki in G[currentV]:
            Relax(G,currentV,ximeki,cost,prev)
          
    return cost, prev


def find_least_cost_vertex(cost,visited):
     leastCost=math.inf
     leastV=' '
     for vertex in cost:
         if vertex not in visited:
             if cost[vertex]<leastCost:
                 leastCost=cost[vertex]
                 leastV=vertex
     return leastV

def reconstruct_path(prev,vertex):
    path=vertex
    while(prev[vertex]!=' '):
        path=prev[vertex]+'->'+path
        vertex=prev[vertex]
    return path

source='A'
cost,prev=Dikstra(G,source)
for vertex in G:
    print(f"Path from {source} to {vertex} is {reconstruct_path(prev,vertex)}")
    print(f"cost is {cost[vertex]}")
