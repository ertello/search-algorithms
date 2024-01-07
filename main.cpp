 /*
  * Algoritmos de busqueda
  * 
  * Compilación con debug:
  *  g++ -std=c++17 *.cpp -Wall -g -o main
  *
  * Compilación para ejecucion:
  *  g++ -std=c++17 *.cpp -Wall -O3 -o main
  *
  * Ejecución con redireccion (input and output):
  *  ./main < TestCases/test01.txt
  *  ./main < TestCases/test03.txt > salida.txt
  */

#include <iostream>
#include <vector>
#include <chrono>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int busquedaSecuencial(std::vector<int> &A, int key, int &compara) {
  compara = 0;
  for (int i = 0; i < (int)A.size(); i++) {
    compara++;
    if (A[i] == key)
      return i;
  }
  return -1;
}

int busquedaSecuencialVectorOrdenado(std::vector<int> &A, int key, int &compara) {
  compara = 0;
  for (int i = 0; i < (int)A.size(); i++) {
    compara++;
    if (A[i] >= key) {
      if (A[i] == key)
        return i;
      else 
        return -1;
    }
  }
  return -1;
}

int busquedaBinaria(std::vector<int> &A, int key, int &compara) {
  int low = 0;
  int high = (int)A.size()-1;
  int mid = 0;
  compara = 0;
  while (low <= high) {
    mid = (low + high)/2;
    compara++;
    if (key == A[mid]) {
      return mid;
    } else if (key < A[mid]) {
      high = mid - 1;
    }
    else {
      low = mid + 1;
    }
  }
  return -1;
}

int busquedaBinariaRecursiva(std::vector<int> &A, int low, int high, int key, int &compara) {
  if (low > high) return -1;
  int mid = low + (high - low)/2;
  compara++;
  if (key == A[mid]) return mid;
  else if (key < A[mid]) 
    return busquedaBinariaRecursiva(A, low, mid-1, key, compara);
  else
    return busquedaBinariaRecursiva(A, mid+1, high, key, compara);
}

int main() {
  int i, tmp, size, key, flag;
  // Inicio conteo de tiempo de ejecución  
  auto startTime = std::chrono::high_resolution_clock::now();
  cin >> size; 
  cout << "Size: " << size << endl;
  cin >> key;
  cout << "Key: " << key << endl;
  cin >> flag;
  cout << "Print flag: " << flag << endl;
  // Declaración del 
  std::vector<int> myVector;
  // Lectura de los elementos del arreglo
  for(i = 0; i < size; i++) {
     cin >> tmp;
     myVector.push_back(tmp);
  }
  if (flag) {
    cout << "Los elementos del arreglo son: " << endl;
    for(i = 0; i < size; i++) {
      cout << myVector[i] << " ";
    }
    cout << endl;
  }
  int comparaciones = 0;
  //cout << "Key buscado esta en indice: " <<    busquedaSecuencial(myVector, key, comparaciones) << endl;
  //cout << "Key buscado esta en indice: " <<    busquedaSecuencialVectorOrdenado(myVector, key, comparaciones) << endl;
  //cout << "Key buscado esta en indice: " <<    busquedaBinaria(myVector, key, comparaciones) << endl;
  cout << "Key buscado esta en indice: " <<    busquedaBinariaRecursiva(myVector, 0, (int)myVector.size()-1, key, comparaciones) << endl;
  
  // Termina conteo de tiempo de ejecución 
  auto endTime = std::chrono::high_resolution_clock::now();
  auto totalTime = endTime - startTime;

  cout << "Tiempo de ejecución en ms: " << totalTime/std::chrono::milliseconds(1) << endl;
  cout << "Numero de comparaciones: " << comparaciones << endl;
  return 0;
}
