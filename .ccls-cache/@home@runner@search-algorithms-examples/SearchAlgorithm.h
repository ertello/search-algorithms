#ifndef _ALGORITHM_SEARCH_H_
#define _ALGORITHM_SEARCH_H_

#include <iostream>
#include <vector>

template <class T>
class SearchAlgorithm {
  public:
    SearchAlgorithm();
    ~SearchAlgorithm();
    int busquedaSecuencial(std::vector<T> &A, T key, int &compara);
    //int busquedaSecuencialVectorOrdenado(std::vector<T> &A, int key, int &compara);
    //int busquedaBinaria(std::vector<T> &A, int key, int &compara);
    //int busquedaBinariaRecursiva(std::vector<T> &A, int low, int high, int key, int &compara);

};

template <class T>
SearchAlgorithm<T>::SearchAlgorithm() {

}

template <class T>
SearchAlgorithm<T>::~SearchAlgorithm() {

}

template <class T>
int SearchAlgorithm<T>::busquedaSecuencial(std::vector<T> &A, T key, int &compara) {
  compara = 0;
  int i = 0;
  while (i < A.size() && A[i] != key) {
    compara++;
    i++;
  }
  if (i < A.size())
    return i;
  else
    return -1;
}


#endif  // _ALGORITHM_SEARCH_H_
