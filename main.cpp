#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
int findPath(std::vector<int> v){
    int sizeOfMaze= sqrt(v.size());
    if(v[0]==0 || v[v.size()-1]==0){
        return false;
    }
    int i=0;
    std::queue<int> q;
    q.push(i);
    while(!q.empty()) {
        int temp = q.front();
        q.pop();
        if (temp < 0 || temp > v.size() - 1) {
            continue;
        }
        if (temp == v.size() - 1) {
            return true;
        }
        if (v[temp + sizeOfMaze] == 1) {
            q.push(temp + sizeOfMaze);
            v[temp + sizeOfMaze] = 0;
        }
        if (v[temp + 1] == 1 && (temp + 1) / sizeOfMaze == temp / sizeOfMaze) {
            q.push(temp + 1);
            v[temp + 1] = 0;
        }
        if (v[temp - 1] == 1 && (temp - 1) / sizeOfMaze == temp / sizeOfMaze) {
            q.push(temp - 1);
            v[temp - 1] = 0;
        }
        if (v[temp - sizeOfMaze] == 1) {
            q.push(temp - sizeOfMaze);
            v[temp - sizeOfMaze] = 0;
        }
    }
    return false;
}

int main() {
    std::vector<int> inputVector;
    int inputUnit;
    while(true){
        std::cin>>inputUnit;
        if(inputUnit==2){
            break;
        }
        inputVector.push_back(inputUnit);
    }
    std::cout<<findPath(inputVector);
}

