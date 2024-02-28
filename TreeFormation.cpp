#include <iostream>
#include <queue>

using namespace std;

class Node
{

public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node *buildTree()
{

    int data;
    cout << " Enter the data: " << endl;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    Node *root = new Node(data);

    cout << "Left Node: " << endl;
    root->left = buildTree();
    cout << "Right Node: " << endl;
    root->right = buildTree();

    return root;
}

void leverOrderTraversal(Node *root)
{

    queue<Node *> q;

    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {

        Node *temp = q.front();

        q.pop();

        if (temp == NULL)
        {
            cout << endl;

            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {

            cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inOrderTraversal(Node* root){

    if(root == NULL){
        return;
    }

    //LNR:
    // L
    inOrderTraversal(root->left);
    
    //N -> print the data of node
    cout<< root -> data<<" ";

    // R
    inOrderTraversal(root->right);

}

void preOrderTraversal(Node* root){

    if(root== NULL){

        return;
    }

    //NLR
     //N -> print the data of node
    cout<< root -> data<<" ";

      // L
    preOrderTraversal(root->left);

      // R
    preOrderTraversal(root->right);


}

void postOrderTraversal(Node* root){

    if(root== NULL){

        return;
    }

    // LRN
      // L
    postOrderTraversal(root->left);

       // R
    postOrderTraversal(root->right);

     //N -> print the data of node
    cout<< root -> data<<" ";

}

int height(Node* root){

    if(root == NULL){
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    int ans = max(leftHeight, rightHeight) + 1;
    return ans;
}

int main()
{

    Node *root = NULL;

    root = buildTree();

    leverOrderTraversal(root);

    cout<< "Height of tree is: " << height(root)<< endl;

    return 0;
}