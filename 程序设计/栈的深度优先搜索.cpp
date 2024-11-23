#include<bits/stdc++.h>
using namespace std;
// 定义节点结构体
struct Node
{
    int val; // 节点的值
    vector<Node*> neighbors; // 邻居节点
    bool visited; // 是否被访问过
};

void dfs(Node* node)
{
    stack<Node*> s{{node}}; // 定义栈并将起始节点压入栈中
    while (!s.empty())
	{ // 栈不为空时循环
        Node* cur = s.top(); // 取出栈顶元素
        s.pop(); // 弹出栈顶元素
        if (!cur->visited)
		{ // 如果当前节点未被访问过
            cur->visited = true; // 标记为已访问
            cout << cur->val << " "; // 输出节点值
            // 将邻居节点压入栈中
            for (auto neighbor : cur->neighbors)
			{
                if (!neighbor->visited)
				{ // 如果邻居节点未被访问过
                    s.push(neighbor); // 压入栈中
                }
            }
        }
    }
}
// 测试代码
int main() {
    // 初始化邻接表
    Node* node1 = new Node{1, {}, false};
    Node* node2 = new Node{2, {}, false};
    Node* node3 = new Node{3, {}, false};
    Node* node4 = new Node{4, {}, false};
    Node* node5 = new Node{5, {}, false};
    node1->neighbors = {node2, node3};
    node2->neighbors = {node1, node4, node5};
    node3->neighbors = {node1, node5};
    node4->neighbors = {node2, node5};
    node5->neighbors = {node2, node3, node4};

    // 深度优先搜索
    dfs(node1);

    return 0;
}
