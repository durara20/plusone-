#include <iostream>
using namespace std;
typedef char nametype;
typedef node* TREE;
struct node {
	node* l_child;
	node* r_child;
	nametype element;
};
int ROOT(node* n)
{
	int left, right;
	if (n->l_child != NULL && n->r_child != NULL)
	{
		left = ROOT(n->l_child) + 1;
		right = ROOT(n->r_child) + 1;
		if (left > right)
			return right;
		else
			return left;
	}
	else if (n->l_child == NULL)
	{
		return 1;
	}
	else if (n->r_child == NULL)
	{
		return 1;
	}
}
node* determine(node* n, node* temp)
{
	if (!(temp->l_child == NULL && temp->r_child == NULL))
	{
		if (temp->l_child == n)
			return temp;
		else if (temp->r_child == n)
			return temp;
		else
		{
			node* r_val = determine(n, temp->l_child);
			if (r_val != NULL)
				return r_val;
			return determine(n, temp->r_child);
		}
	}
	return NULL;
}
node* PARENT(node* n, TREE T)
{
	if (T == n)
		return NULL;
	node* temp = T;
	return determine(n, temp);
}
node* LEFTMOST_CHILD(node* n, TREE T)
{
	node* temp = PARENT(n, T);
	temp = temp->l_child;
	while (temp->l_child != NULL)
		temp = temp->l_child;
	return temp;
}
node* RIGHT_SIBLING(node* n, TREE T)
{
	node* temp = PARENT(n, T);
	if (temp->l_child == n)
		return temp->r_child;
	else
		return NULL;
}
nametype LABEL(node* n, TREE T)
{
	node* temp = PARENT(n, T);
	if (temp->l_child == n)
		return temp->l_child->element;
	else
		return temp->l_child->element;
}