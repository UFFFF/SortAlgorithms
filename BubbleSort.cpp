#include <iostream>
#include <vector>
#include <random>

void bubbleSortAlgorithm(std::vector<int>);
void vectorOutput(std::vector<int>);
int rndmNumber();
int vectorSize();

int main(){
    std::vector<int> vectorToSort;
    vectorToSort.resize(vectorSize());
    for(unsigned int i = 0; i < vectorToSort.size(); i++){
        vectorToSort.at(i) = rndmNumber();
    }
    vectorOutput(vectorToSort);
    bubbleSortAlgorithm(vectorToSort);
    return 0;
}

void bubbleSortAlgorithm(std::vector<int> vec){
    for(unsigned int i = 0; i < vec.size(); i++){
        int pivot = i;
        for(unsigned int l = i + 1; l < vec.size(); l++){
            if(vec.at(pivot) > vec.at(l)){
                int temp = vec.at(l);
                vec.at(l) = vec.at(pivot);
                vec.at(pivot) = temp;
            }
        }
    }
    vectorOutput(vec);
}

int rndmNumber(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(0,100000);

    return distr(gen);
}

int vectorSize(){
    std::cout << "vector length: " ;
    int size;
    std::cin >> size;
    return size;
}

void vectorOutput(std::vector<int> vec){
    for(unsigned int i = 0; i < vec.size(); i++){
        std::cout << vec.at(i) << "  " ;
    }
}
