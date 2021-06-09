struct Node *util(struct Node *root, int k, int sum)
{
	if (root == NULL) return NULL;

	int lsum= *sum + (root->data);
	int rsum= lsum;
	root->left= util(root->left, k, &lsum);
	root->right= util(root->right, k, &rsum);

	*sum = max(lsum, rsum);

	if (*sum < k)
	{
		free(root);
		root = NULL;
	}

	return root;
}

struct Node *prune(struct Node *root, int k)
{
	int sum = 0;
	return util(root, k, &sum);
}
