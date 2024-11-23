#include<bits/stdc++.h>
using namespace std;
// ����ڵ�ṹ��
struct Node
{
    int val; // �ڵ��ֵ
    vector<Node*> neighbors; // �ھӽڵ�
    bool visited; // �Ƿ񱻷��ʹ�
};

void dfs(Node* node)
{
    stack<Node*> s{{node}}; // ����ջ������ʼ�ڵ�ѹ��ջ��
    while (!s.empty())
	{ // ջ��Ϊ��ʱѭ��
        Node* cur = s.top(); // ȡ��ջ��Ԫ��
        s.pop(); // ����ջ��Ԫ��
        if (!cur->visited)
		{ // �����ǰ�ڵ�δ�����ʹ�
            cur->visited = true; // ���Ϊ�ѷ���
            cout << cur->val << " "; // ����ڵ�ֵ
            // ���ھӽڵ�ѹ��ջ��
            for (auto neighbor : cur->neighbors)
			{
                if (!neighbor->visited)
				{ // ����ھӽڵ�δ�����ʹ�
                    s.push(neighbor); // ѹ��ջ��
                }
            }
        }
    }
}
// ���Դ���
int main() {
    // ��ʼ���ڽӱ�
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

    // �����������
    dfs(node1);

    return 0;
}
