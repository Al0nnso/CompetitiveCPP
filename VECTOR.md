# Vector
Um array redimensionável com funções adicionais

`include <vector> `

```cpp
// CRIAR
vector<int> VETOR;
//com um tamanho predefinido
vector<int> VETOR(5);
```

## Funções

```cpp
// ADD numbers on the end:  
VETOR.push_back(10);
```

```cpp
// GET the SIZE:  
VETOR.size();
```

```cpp
// GET the first and lest elements:  
VETOR.front();
VETOR.back();
// GET another element:  
VETOR .at(4);
```

```cpp
// Verify if is EMPTY:  
VECTOR.empty()
```

```cpp
// DEFINE:
VETOR[2]=34;
```

```cpp
// REMOVE the last and the first element:  
VETOR.pop_back();  
VETOR.pop_front();
```

```cpp
// Invert / change all data with another vector:  
VETOR.swap(VECTOR2);
```

```cpp
// ADD AND REMOVE (without interator)

// Insert a element in another local
// inserting at the 2 position (0+1):  
VETOR.insert( VETOR.begin() + 1 , 888 );
// inserting at the size - 1:  
VETOR.insert( VETOR.end() - 1 , 888 );
```

```cpp
// Remove position (the last - 1):  
VETOR.erase(VETOR.end() - 1);
```
