#include<bits/stdc++.h>

using namespace std;

struct Data
{
    string owner_name;
    string address;
    string mobile_no;
    string phone;
    float value;
};

struct node
{
    string time;
    Data data_node;
    int node_ID;
    int node_number;
    node *ref_ParentID;
    node *ref_ChildNode;
    void addData(Data data_node, node *hdr);
    void showData(Data data_node);

};


void node::showData(Data data_node) {
    cout << "Owner Name : " << data_node.owner_name << endl ;
    cout << "Address : " << data_node.address << endl ;
    cout << "Mobile number : " << data_node.mobile_no << endl ;
    cout << "Phone nymber : " << data_node.phone << endl;
    cout << "Value : " << data_node.value << endl;
}

void node::addData(Data d_node, node *hdr) {
    cout << "Enter Owner Name : " ;
    cin >> d_node.owner_name ;
    cout << "Enter Address : " ;
    cin >> d_node.address ;
    cout << "Enter Mobile Number : " ;
    cin >> d_node.mobile_no ;
    cout << "Enter Phone Number : " ;
    cin >> d_node.phone ;
    cout << "Enter value : " ;
    cin >> d_node.value ;
    hdr->data_node = d_node;
}

int main()
{
    return 0;
}
