#ifndef _ALGORITHM_SEARCH_H_
#define _ALGORITHM_SEARCH_H_

#include <iostream>
#include <vector>

template <class T>
class AlgorithmSearch {
  public:
    AlgorithmSearch();
    ~AlgorithmSearch();
    int busquedaSecuencial(std::vector<T> &A, int key, int &compara);
    int busquedaSecuencialVectorOrdenado(std::vector<T> &A, int key, int &compara);
    int busquedaBinaria(std::vector<T> &A, int key, int &compara);
    int busquedaBinariaRecursiva(std::vector<T> &A, int low, int high, int key, int &compara);
};


template <class T>
int AlgorithmSearch<T>::busquedaSecuencial(std::vector<int> &A, int key, int &compara) {

  int i = 0;
  
}

#endif  // _ALGORITHM_SEARCH_H_
