//將Node按照val順序小到大排列

class Node{
  Node *next;
  int val;
};

bool compare(const Node*a, const Node*b){
  return a.val < b.val;
}

int main(){
  vector<Node> arr;
  sort(arr.begin() , arr.end() , compare);
}
