/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
  public:
      Node* cloneGraph(Node* node) {
          if (node == nullptr)
              return nullptr;
  
          unordered_map<Node*, Node*> nodes;
          nodes.insert({node, new Node(node->val)});
  
          queue<Node*> q;
          q.push(node);
  
          while(!q.empty()) {
              Node *front = q.front();
              q.pop();
              for (Node *neighbor : front->neighbors) {
                  if (nodes.find(neighbor) == nodes.end()) { // Insert new node
                      Node *cloned_neighbor = new Node(neighbor->val);
                      cloned_neighbor->neighbors.push_back(nodes[front]);
                      nodes.insert({neighbor, cloned_neighbor});
                      q.push(neighbor);
                  } else {
                      nodes[neighbor]->neighbors.push_back(nodes[front]);
                  }
              }
          }
          return nodes[node];
      }
  };