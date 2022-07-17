#include<iostream>
#include<queue>
using namespace std;

class node{
   
  public:
    int data;
    node* left;
    node* right;

  node(int d){
    this->data = d;
    this->left = NULL;
    this->right = NULL;
  }  
};

node* binary_tree(node* root){

  cout<<"Enter a data:"<<endl;
  int data;
  cin>>data;
  root=new node(data);

  if(data ==-1){
    return NULL;
  }

  cout<<"Enter data for inserting in left of:"<<data<<endl;
  root->left=binary_tree(root->left);

  cout<<"Enter data for inserting in right of:"<<data<<endl;
  root->right=binary_tree(root->right);

  return root;
}

void levelOrderTraversal(node* root){
  queue<node*>q;

  q.push(root);
  q.push(NULL);

  while(!q.empty()){
    node* temp=q.front();
    q.pop();

    if(temp == NULL){
      cout<<endl;

      if(!q.empty()){
        q.push(NULL);
      }
    }
    else{
      cout<< temp->data <<" ";
      if(temp->left){
        q.push(temp->left);
      }

      if(temp->right){
      q.push(temp->right);
      }
    }
  }
}
void inOrder(node* root){

  if(root==NULL){
    return ;
  }

  inOrder(root->left);
  cout<<root->data;
  inOrder(root->right);
}

void preOrder(node* root){

  if(root==NULL){
    return ;
  }
 
  cout<<root->data;
  preOrder(root->left);
  preOrder(root->right);
}

void postOrder(node* root){

   if(root==NULL){
    return ;
  }
 
  preOrder(root->left);
  postOrder(root->right);
  cout<<root->data;
}

void buildFromLevelOrder(node* &root){
  queue<node*> q;

  cout<<"Enter data for root"<<endl;
  int data;
  cin>>data;
  root=new node(data);

  q.push(root);

  while(!q.empty()){

    node* temp = q.front();
    q.pop();

    cout<<"Enter data to insert in left node:"<< temp->data <<endl;
    int leftData;
    cin>>leftData;

    if(leftData != -1){
      temp -> left = new node(leftData);
      q.push(temp->left);
    }

    cout<<"Enter data to insert in right node:"<<temp->data<<endl;
    int rightData;
    cin>>rightData;

    if(rightData != -1){
      temp -> right = new node(rightData);
      q.push(temp->right);
    }
  }
};
int main(){

  node* root = NULL;

  buildFromLevelOrder(root);
  levelOrderTraversal(root);

  root=binary_tree(root);

  cout<<"printing data for level travelsal"<<endl;
  levelOrderTraversal(root);

 
  cout<<"inOrder is:";
  inOrder(root);
  
  cout<<endl<<"preOrder is:";
  preOrder(root);

  
  cout<<endl<<"postOrder is:";
  postOrder(root);

  //1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 -1 
  
  return 0;
}