#include <iostream>
#include <queue>

using namespace std;

const int n = 10;
bool* visited = new bool[n];


int graph[n][n] =
{
{0, 1, 0, 1, 0, 0, 1, 0, 0, 0},
{1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 1, 0, 1, 0, 0, 0},
{1, 0, 0, 0, 0, 0, 1, 0, 0, 0},
{0, 0, 1, 0, 0, 1, 0, 0, 1, 0},
{0, 0, 0, 0, 1, 0, 0, 0, 1, 0},
{1, 0, 1, 1, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
{0, 0, 0, 0, 1, 1, 0, 1, 0, 1},
{0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
};

void BFS(int start)
{
	queue <int> q; // хранени€ вершин которые можно посетить
	bool visited[n]; 
	bool inqueue[n];
	int view_cell; // вершина которую сейчас рассматриваем

	// инициализируем массивы
	for (int i = 0; i < n; i++)
	{
		visited[i] = inqueue[i] = false;
	}

	// обход с вершины
	q.push(start);
	visited[start] = inqueue[start] = true;

	while (!q.empty())
	{
		// извлекаем вершину из очереди и выводим
		view_cell = q.front();
		cout << view_cell + 1 << " ";

		// помечаем вершину и удал€ем ее из оч
		visited[view_cell] = true;
		q.pop();

		// просматриваем смежные вершины текущей
		for (int i = 0; i < n; i++)
		{
			// если вершина i еще не в очереди и существует ребро между ними
			if (!inqueue[i] && graph[view_cell][i])
			{
				// добавл€ем вершину и помечаем 
				q.push(i);
				inqueue[i] = true;
			}
		}
	}
}

void DFS(int st)
{
	cout << st + 1 << " ";
	visited[st] = true;

	//проход по всем вершинам смежных с тек
	for (int r = 0; r <= n; r++) {
		// провер€ем есть ли ребро между тек и r 
		if ((graph[st][r] != 0) && (!visited[r]))
			DFS(r);
	}
}

void main()
{
	setlocale(LC_ALL, "Rus");
	int start;
	cout << "ћатрица смежности графа: " << endl;
	for (int i = 0; i < n; i++)
	{
		visited[i] = false;

		for (int j = 0; j < n; j++)
			cout << " " << graph[i][j];
		cout << endl;
	}

	//поиск в глубину
	cout << "\n" << endl;
	cout << "ѕоиск в глубину" << endl;
	cout << "—тартова€ вершина -  "; cin >> start;
	cout << "ѕор€док обхода: ";
	DFS(start - 1);

	//поиск в ширину
	cout << "\n" << endl;
	int start_2;
	cout << "\nѕоиск в ширину" << endl;
	cout << "—тартова€ вершина -  "; cin >> start_2;
	cout << "ѕор€док обхода: ";
	BFS(start_2 - 1);

	//список ребер 
	cout << "\n—писок рЄбер: " << endl;
	int arr_1[11] = { 1,1,1,4,7,3,5,5,6,9,9 };
	int arr_2[11] = { 2,7,4,7,3,5,9,6,9,8,10 };

	for (int i = 0; i <= n; i++)
	{
		cout << '{' << arr_1[i] << ", " << arr_2[i] << '}';
		cout << " {" << arr_2[i] << ", " << arr_1[i] << '}' << endl;
	}

	//список смежности 
	cout << "\n—писок смежности: " << endl;
	int arrEdges[10][10] =
	{ {2,4,7},{1},{5,7},{1,7},{3,6,9},{5,9},{1,3},{9},{10},{9} };

	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << "->";

		for (int j = 0; j < n; j++)
		{
			if (arrEdges[i][j] == 0)
			{
				break;
			}
			cout << arrEdges[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	delete[]visited;
	cout << endl;
}