#include <iostream>
#include <vector>
#include <random>

int rndmNumber();
int vectorSize();
void vectorOutput(std::vector<int>);
std::vector<int> SelectionSort(std::vector<int>);

int main(){
    std::vector<int> vectorToSort;
    vectorToSort.resize(vectorSize());
    for(unsigned int i = 0; i < vectorToSort.size(); i++){
        vectorToSort.at(i) = rndmNumber();
    }
    vectorOutput(vectorToSort);
    std::cout << "sorted vector" << std::endl;
    SelectionSort(vectorToSort);
    return 0;
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

std::vector<int> SelectionSort(std::vector<int> vec){
    for(unsigned int i = 0; i < vec.size(); i++){
        int pivot = i;
        int currentElem = vec.at(i);
        for(unsigned int l = i + 1; l < vec.size(); l++){
            if (currentElem < vec.at(l)){}
            else
            {
                int newElem = vec.at(l);
                currentElem = newElem;
                pivot = l;
            }
        }
        vec.at(pivot) = vec.at(i);
        vec.at(i) = currentElem;
    }
    vectorOutput(vec);
    return vec;
}
