#include <iostream>
#include <vector>	// ���� �迭 �ڷᱸ�� ���� ���
#include <queue>	// �켱���� ť ���
#include <utility>	// pair �ڷ��� ��� (first, second)
#define INF 1e9		// ���Ѵ븦 �ǹ��ϴ� ��� ���� = �� 10��

using namespace std;	// std:: ���������ϰ� �ϴ� ���ӽ����̽� ����
	
int V, E;	// V (Vertex): ���� �� E (Edge): ���� ��
vector<pair<int, int>> graph[1001];	// ���� ����Ʈ ����� �׷��� (v: ���� / w: ����ġ)
int dist[1001];		// ���������κ��� �� ���������� �ִ� �Ÿ� �迭 == distance

// ���ͽ�Ʈ�� �˰��� ���� �Լ�
void dijkstra(int start) {
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;	// �ּ� �� ������ �켱���� ť: (�Ÿ�, ����)
}