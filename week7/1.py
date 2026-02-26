import math 

def multi_stage_graph(graph, stages, source, destination):
	n = len(graph)
	cost = [math.inf] * n
	path = [0] * n

	cost[destination] = 0

	for i in range(n - 1, -1, -1):
		for (v,w) in graph[i]:
			if cost[v] + w < cost[i]:
				cost[i] = cost[v] + w
				path[i] = v


	min_path = []
	current = source
	while current != destination:
		min_path.append(current)
		current = path[current]

	min_path.append(destination)

	return cost[source], min_path


graph = {
	0: [(1,2), (2,1)],
	1: [(3,3), (4,2)],
	2: [(3,2), (4,3), (5,2)],
	3: [(6,1)],
	4: [(6,3)],
	5: [(6,2)],
	6: []
}
		
stages = 4
source = 0
destination = 6

min_cost, min_path = multi_stage_graph(graph, stages, source, destination)

print("Minimum cost :", min_cost)
print("Minimum path is : ", [node for node in min_path])			
