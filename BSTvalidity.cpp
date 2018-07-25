bool ans = true;
	bool checkBST(Node* root) {
	   return nodes(root, 0, 10000);
	}

bool nodes(Node* node, int min, int max){
    if(node == NULL){
           return true;
    }
    if(node->data <= min || node->data >= max){
        return false;
    }
        return nodes(node->left, min, node->data) && nodes(node->right, node->data, max);
}