#include <iostream>
#include <algorithm>
#include <string>
#include <deque>
using namespace std;

typedef struct Node{
  string name;
  bool dir;
  deque <struct Node*> next;
  Node(string s, bool m){
    name = s;
    dir = m;
  }
}Node;

bool cmp(Node* t1, Node* t2){
  if((t1 -> dir && t2 -> dir) || (!(t1 -> dir) && !(t2 -> dir))){
    if((t1 -> name).compare(t2 -> name) < 0)
      return true;
    else
      return false;
  }else if(t1 -> dir)
    return true;
  else
    return false;
}

void Insert(Node* &root, string s){
  if(s == "") return;
  int index = -1;
  if((index = s.find_first_of('\\')) != string::npos){
    string name = s.substr(0, index);
    string ts = s.substr(index + 1, s.length());
    bool flag = true;
    int j;
    for (int i = 0; i < (root -> next).size(); i += 1)
      if((root -> next)[i] -> name == name){
        flag = false;
        j = i;
        break;
      }

    if(flag){
      Node *p = new Node({name, true});
      (root -> next).push_back(p);
      Insert((root -> next).back(), ts);
    }else{
      Insert((root -> next)[j], ts);
	}
  }else{
    bool flag = true;
    for(int i = 0; i < (root -> next).size(); i += 1){
      if((root -> next)[i] -> name == s)
	  	flag = false;
    }
    if(flag){
      Node *p = new Node({s, false});
      (root -> next).push_back(p);
    }
  }
}

void printer(Node* &root, int deloop){
  if((root -> next).size() == 0)
  	return;
  for (int i = 0; i < (root -> next).size(); i += 1){
    sort((root -> next).begin(), (root -> next).end(), cmp);
    for(int j = 0; j < deloop; j += 1)
		cout << "  ";
    cout << (root -> next)[i] -> name << endl;
    printer((root -> next)[i], deloop + 1);
  }
}

int main(){
  int n;
  cin >> n;
  Node *root = new Node({"root", true});
  root -> name = "root";
  while (n--){
    string s;
    cin >> s;
    Insert(root, s);
  }
  cout << "root" << endl;
  printer(root, 1);
  return 0;
}