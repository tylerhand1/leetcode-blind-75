# 133 Clone Graph

For this problem, I used Breadth First Search to visit all nodes in the graph and a hashmap of original and cloned nodes. 

First, check if the node is null since that is a certain edge case to consider. If it is, return `nullptr`.

Create a new hashmap and insert a copy of the first node as well as a queue and the original node.

While the queue is not empty, pop the first node and iterate over its neighbors. If the hashmap contains the key neighbor, access the cloned neighbor node and insert the reference to the clone of the front node. Otherwise, clone the neighbor and insert the cloned popped node as a neighbor, insert the neighbor and cloned neighbor pair into the hashmap and push the original neighbor into the queue.

Return the first cloned node.