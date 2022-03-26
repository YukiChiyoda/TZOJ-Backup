#include <iostream>
using namespace std;

struct book{
    string Name;
    string Number;
};

string Search(book data[], int left, int right, string finding){
    if(left > right){
        return "";
    }else{
        int mid = (left + right) / 2;
        if(data[mid].Name == finding){
            return data[mid].Number;
        }else{
            if(data[mid].Name > finding){
                return Search(data, left, mid - 1, finding);
            }else{
                return Search(data, mid + 1, right, finding);
            }
        }
    }
}

int main(){
    int n;
    while(cin >> n){
        book temp[10000];
        for(int i = 0; i < n; i += 1){
            cin >> temp[i].Name >> temp[i].Number;
        }
        int t;
        cin >> t;
        while(t--){
            string finding;
            cin >> finding;
            string cont = Search(temp, 0, n - 1, finding);
            if(cont != ""){
                cout << cont << endl;
            }else{
                cout << "can't find" << endl;
            }
        }
    }
    return 0;
}