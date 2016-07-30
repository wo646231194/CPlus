#include <iostream>
#include <vector>
#include <algorithm>

void print(std::vector<int> &vec){
    std::cout<< "show vector" <<std::endl;
    for(std::vector<int>::iterator iter = vec.begin();iter != vec.end();++iter){
        std::cout << * iter << std::endl;
    }
}

bool gt(int a){
    return a>60;
}

bool sgt(int a, int b){
    return a>b;
}

int main() {
    int array[] = {43,12,34,59,64,99};
    std::vector<int> vec(array, array+6);
    print(vec);

    std::cout<<count_if(vec.begin(), vec.end(),gt)<<std::endl;
    sort(vec.begin(), vec.end(), sgt);
    print(vec);

    for(std::vector<int>::iterator iter = vec.begin();iter != vec.end(); ++ iter){
        if(*iter < 60){
            vec.erase(iter);
            iter = vec.begin();
        }
    }
    print(vec);

    getchar();
}