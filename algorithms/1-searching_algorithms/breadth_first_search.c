#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int graph[MAX_SIZE][MAX_SIZE]; // adjacency matrix representing the graph
int visited[MAX_SIZE];		   // array to keep track of visited vertices
int queue[MAX_SIZE];		   // queue used in BFS
int front = -1, rear = -1;	   // front and rear pointers for the queue

// function to add an edge to the graph
void add_edge(int u, int v)
{
	graph[u][v] = 1;
	graph[v][u] = 1; // uncomment if the graph is undirected
}

// function to perform BFS on the graph
void bfs(int start_vertex, int num_vertices)
{
	visited[start_vertex] = 1;	  // mark the starting vertex as visited
	queue[++rear] = start_vertex; // add the starting vertex to the queue

	while (front != rear)
	{										 // loop until the queue is empty
		int current_vertex = queue[++front]; // get the next vertex from the queue
		printf("%d ", current_vertex);		 // print the current vertex

		for (int i = 0; i < num_vertices; i++)
		{ // check all the vertices
			if (graph[current_vertex][i] == 1 && visited[i] == 0)
			{					   // if there is an edge and the vertex is not visited
				visited[i] = 1;	   // mark the vertex as visited
				queue[++rear] = i; // add the vertex to the queue
			}
		}
	}
}

int main()
{
	int num_vertices, num_edges;
	printf("Enter the number of vertices: ");
	scanf("%d", &num_vertices);
	printf("Enter the number of edges: ");
	scanf("%d", &num_edges);

	// initialize the graph and visited arrays
	for (int i = 0; i < num_vertices; i++)
	{
		for (int j = 0; j < num_vertices; j++)
		{
			graph[i][j] = 0;
		}
		visited[i] = 0;
	}

	// read the edges and add them to the graph
	for (int i = 0; i < num_edges; i++)
	{
		int u, v;
		printf("Enter edge %d: ", i + 1);
		scanf("%d %d", &u, &v);
		add_edge(u, v);
	}

	int start_vertex;
	printf("Enter the starting vertex: ");
	scanf("%d", &start_vertex);

	printf("BFS traversal: ");
	bfs(start_vertex, num_vertices);

	return 0;
}
