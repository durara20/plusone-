#include <iostream>
using namespace std;
class tree {
public:
	char v;
	tree* right;
	tree* left;
	tree() {
		v = {};
		right = NULL;
		left = NULL;
	};
};
void post_order(tree*);
void inorder(tree*);
void pre_order(tree*);
int main()
{
	tree* div = new tree;//
	tree* m1 = new tree;//
	tree* two = new tree;//
	tree* sub = new tree;//
	tree* a = new tree;//
	tree* b = new tree;//
	tree* plus = new tree;//
	tree* c = new tree;//
	tree* m2 = new tree;//
	tree* b2 = new tree;
	tree* b3 = new tree;
	tree* d1 = new tree;
	tree* d2 = new tree;
	tree* d3 = new tree;
	tree* d4 = new tree;