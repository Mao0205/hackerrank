class Recode{
    public:
    int count;
    vector<int> relation;
    Recode():count(0){};
    //Recode():count(0),relation({1,2,3}){};
    //Recode():count(0),relation({}){};
};

class Recode1 {
public:
    int count;
    vector<int> relation;

    // 建構子
    Recode() : count(0) {
        int size;
        cin >> size;
        relation.resize(size);
        for (int i = 0; i < size; ++i) {
            cin >> relation[i];
        }
        // 設定 count 為 relation 的大小
        count = size;
    }
};
