#include <iostream>	//표준 입출력 기능 사용(cin, cout 등)
#include <vector>	// 동적 배열 자료구조 vector 사용
#include <queue>	   // 우선순위 큐 사용
#include <utility>	     // pair 자료구조 사용 (first, second)
#define INF 1e9		       // 무한대 의미하는 상수 정의

using namespace std;	     // std:: 생략 가능하게 하는 네임스페이스 선언
	
int V, E;	        // Vertex: 정점수, Edge: 간선수
vector<pair<int, int>> graph[1001];	        // graph[정점] = { (인접정점, 가중치) } 
int dist[1001];		        // distance: 시작점부터 각 정점까지의 최단 거리

void dijkstra(int start) { // 다익스트라 알고리즘 함수 정의
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;	
	// 우선순위 큐 선언 -> pair<int, int> 형태로 (거리, 정점) 저장
	// vector<pair<int, int>> 형태로 저장 / 오름차순 정렬

	pq.push({ 0, start }); // 시작점의 거리는 0으로 초기화해서 큐에 삽입
	dist[start] = 0; // 시작점의 최단 거리를 0으로 초기화

	while (!pq.empty()) {	// 큐가 빌 때까지 반복
		int current_cost = pq.top().first; // 현재 정점까지의 거리
		int current_node = pq.top().second; // 현재 탐색할 정점
		pq.pop(); // 정점 꺼내기

		if (current_cost > dist[current_node]) continue; // 더 짧은 거리가 이미 발견된 경우 무시	

		for (auto& neighbor : graph[current_node]) {	// 현재 정점과 연결된 인접 정점 탐색
			int next_node = neighbor.first; // 다음 정점
			int edge_cost = neighbor.second; // 가중치
			int new_cost = current_cost + edge_cost; // 새 거리 계산

			if (new_cost < dist[next_node]) { // 새 거리가 더 짧은 경우
				dist[next_node] = new_cost; // 최단 거리 갱신
				pq.push({ new_cost, next_node }); // 큐에 삽입
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false); // 입출력 속도 향상
	cin.tie(0); // cin과 cout의 동기화 끊기

	cin >> V >> E; // 정점수와 간선수 입력

	for (int i = 0; i < E; i++) {	// 간선 정보 입력
		int u, v, w; // u: 시작 정점, v: 도착 정점, w: 가중치
		cin >> u >> v >> w; // 간선 정보 입력
		graph[u].emplace_back(v, w); // 그래프에 간선 추가
		// graph[v].emplace_back(u, w); // 무방향 그래프일 경우 주석 해제
	}

	int start; // 시작 정점
	cin >> start; // 시작 정점 입력
}