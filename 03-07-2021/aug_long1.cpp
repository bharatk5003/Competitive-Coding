#include<stdio.h>
#define N 300010
#include<limits.h>
#include<stdlib.h>
#define max(a,b) (a>b)?a:b


struct Queue {
	int front, rear, size;
	unsigned cap;
	int* array;
};


struct Edge {
	int from, to, next;
} edge[N];


struct Queue* createQueue(unsigned cap)
{
	struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
	queue->cap = cap;
	queue->front = queue->size = 0;

	// This is important, see the enqueue
	queue->rear = cap - 1;
	queue->array = (int*)malloc(
	                   queue->cap * sizeof(int));
	return queue;
}


int Pull(struct Queue* queue)
{
	return (queue->size == queue->cap);
}


void nq(struct Queue* queue, int item)
{
	if (Pull(queue))
		return;
	queue->rear = (queue->rear + 1)
	              % queue->cap;
	queue->array[queue->rear] = item;
	queue->size = queue->size + 1;
}


int Empty(struct Queue* queue)
{
	return (queue->size == 0);
}


int dq(struct Queue* queue)
{
	if (Empty(queue))
		return INT_MIN;
	int item = queue->array[queue->front];
	queue->front = (queue->front + 1)
	               % queue->cap;
	queue->size = queue->size - 1;
	return item;
}


// Queue is empty when size is 0


int front(struct Queue* queue)
{
	if (Empty(queue))
		return INT_MIN;
	return queue->array[queue->front];
}

// Function to get rear of queue


int rear(struct Queue* queue)
{
	if (Empty(queue))
		return INT_MIN;
	return queue->array[queue->rear];
}


int head[N], tot;


void addedge(int u, int v) {
	edge[++tot] = (struct Edge) {u, v, head[u]};
	head[u] = tot;
}

int f[N][26], n, m, d[N];
char s[N];


//queue<int> Q;

int beauty(int m, int n, char z[], int x[], int y[])
{
	struct Queue *Q = createQueue(N);
	char s[N];
	for (int i = 1; i <= n; i++)
	{
		s[i] = z[i - 1];
	}
	for (int i = 1; i <= m; i++)
	{
		addedge(x[i - 1], y[i - 1]);
		d[y[i - 1]] ++;
	}

	for (int i = 1; i <= n; i++)
	{
		if (!d[i])
		{
			nq(Q, i);
			f[i][s[i] - 'a'] = 1;
		}
	}

	int rem = n;
	while (!Empty(Q))
	{
		int now = front(Q);
		dq(Q);
		rem --;
		for (int i = head[now]; i; i = edge[i].next)
		{
			struct Edge e = edge[i];
			for (int j = 0; j < 26; j++)
			{
				f[e.to][j] = max(f[e.to][j], f[now][j] + (s[e.to] - 'a' == j));
			}
			d[e.to] --;
			if (!d[e.to]) nq(Q, e.to);
		}
	}

	if (rem) return -1;

	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			ans = max(ans, f[i][j]);
		}
	}

	return ans;
}
int main()
{
	int m , num;
	scanf("%d%d", &num, &m);

	scanf("%s", s);

	int x[m], y[m];
	for (int i = 0; i < m; i++) {
		scanf("%d%d", &x[i], &y[i]);
	}
	printf("%d", beauty(m, num, s, x, y));
}