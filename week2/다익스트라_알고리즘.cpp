#include <iostream>
#include <vector>	// 동적 배열 자료구조 벡터 사용
#include <queue>	// 우선순위 큐 사용
#include <utility>	// pair 자료형 사용 (first, second)
#define INF 1e9		// 무한대를 의미하는 상수 정의 = 약 10억

using namespace std;	// std:: 생략가능하게 하는 네임스페이스 선언
	
int V, E;	// V (Vertex): 정점 수 E (Edge): 간선 수
vector<pair<int, int>> graph[1001];	// 인접 리스트 방식의 그래프 (v: 정점 / w: 가중치)
int dist[1001];		// 시작점으로부터 각 정점까지의 최단 거리 배열 == distance

// 다익스트라 알고리즘 정의 함수
void dijkstra(int start) {
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;	// 최소 힙 구조의 우선순위 큐: (거리, 정점)
}