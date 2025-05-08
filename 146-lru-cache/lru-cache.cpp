class LRUCache {
public:
class Node{
    public:
    int key;
    int val;
    Node* prev;
    Node* next;
    Node(int key,int val){
        this->key=key;
        this->val=val;
    }
};
    unordered_map<int,Node*> mpp;
    int capacity;
    Node* head=new Node(-1,-1);
    Node* tail=new Node(-1,-1);
    LRUCache(int capacity_) {
        capacity=capacity_;
        mpp.clear();
        head->next=tail;
        tail->prev=head;
    }
    
    void insertAfterHead(Node* newnode)
    {
        Node* temp=head->next;
        newnode->next=temp;
        newnode->prev=head;

        head->next=newnode;
        temp->prev=newnode;
    }

    void deleteNode(Node* delnode)
    {
        Node* prevv=delnode->prev;
        Node* nextt=delnode->next;
        prevv->next=nextt;
        nextt->prev=prevv;
    }
    int get(int key) {
        if(mpp.count(key)==0)
        return -1;
        Node* node=mpp[key];
        deleteNode(node);
        insertAfterHead(node);
        return node->val;
    }
    
    void put(int key, int value) {
        if(mpp.count(key)!=0)
        {
            Node* node=mpp[key];
            node->val=value;
            deleteNode(node);
            insertAfterHead(node);
        }
        else
        {
            if(mpp.size()==capacity)
            {
                Node* node=tail->prev;
                mpp.erase(node->key);
                deleteNode(node);
            }
            Node* newnode=new Node(key,value);
            mpp[key]=newnode;
            insertAfterHead(newnode);

        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */