 int treehight(TreeNode* root){
        // base case
        if(root==NULL){
            return 0;
        }
        int lefthight = treehight(root->left);
        int righthight = treehight(root->right);
        int hight = max(lefthight, righthight)+1;

        return hight;

    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        // base case
        if(root== NULL){
            return 0;
        }

        int option1 = diameterOfBinaryTree(root->left);
        int option2 = diameterOfBinaryTree(root->right);

        int option3 = treehight(root->left)+ treehight(root->right);

        int diameter = max(option1 , max(option2, option3));

        return diameter;
    }
