#ifndef _ALGORITHM_SEARCH_H_
#define _ALGORITHM_SEARCH_H_

#include <iostream>
#include <vector>

template <class T>
class AlgorithmSearch {
  public:
    AlgorithmSearch();
    ~AlgorithmSearch();
    int busquedaSecuencial(std::vector<int> &A, int key, int &compara);
    int busquedaSecuencialVectorOrdenado(std::vector<int> &A, int key, int &compara);
    int busquedaBinaria(std::vector<int> &A, int key, int &compara);
    int busquedaBinariaRecursiva(std::vector<int> &A, int low, int high, int key, int &compara);
};

#endif  // _ALGORITHM_SEARCH_H_
