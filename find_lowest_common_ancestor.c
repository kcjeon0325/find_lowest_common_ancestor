int find_lowest_common_ancestor_in_BST(node *root, int value1, int value2)
{
	node *curr_node = root;

	while(1)
	{
		if(!curr_node) return 0;

		if(curr_node->value > value1 && curr_node->value > value2)
			cur_node = cur_node->left;
		else if(curr_node->value < value1 && curr_node->value < value2)
			cur_node = cur_node->right;
		else 
			return cur_node;
	}
}