# Coding Project 3

## Disclaimer

Ich werde meine Lösung Schritt-für-Schritt live programmieren.  
Deswegen müsst ihr diese nicht selber lösen, ihr könnt es aber gerne probieren.

## Exercise 1

Implementiere die folgenden Konstruktoren für die Matrix Template Klasse.

```cpp
template <typename T>
Matrix<T>::Matrix(const std::size_t rows, const std::size_t cols)

template <typename T>
Matrix<T>::Matrix(const std::size_t rows, const std::size_t cols, const T value)
```

## Exercise 2

Implementiere die folgenden Operatoren für die Matrix Template Klasse.

```cpp
template <typename T>
Matrix<T>::Matrix(const std::size_t rows, const std::size_t cols)

template <typename T>
Matrix<T>::Matrix(const std::size_t rows, const std::size_t cols, const T value)

template <typename T>
Matrix<T> Matrix<T>::operator+(const Matrix<T> &rhs) const

template <typename T>
Matrix<T> &Matrix<T>::operator+=(const Matrix<T> &rhs)

template <typename T>
Matrix<T> Matrix<T>::operator-(const Matrix<T> &rhs) const

template <typename T>
Matrix<T> &Matrix<T>::operator-=(const Matrix<T> &rhs)

template <typename T>
Matrix<T> Matrix<T>::operator*(const T &scalar) const

template <typename T>
Matrix<T> &Matrix<T>::operator*=(const T &scalar)

template <typename T>
Matrix<T> Matrix<T>::operator/(const T &scalar) const

template <typename T>
Matrix<T> &Matrix<T>::operator/=(const T &scalar)

template <typename T>
Matrix<T> Matrix<T>::operator*(const Matrix &rhs) const

template <typename T>
Matrix<T> &Matrix<T>::operator*=(const Matrix &rhs)
```

Um die Operatoren zu implementieren muss natürlch bekannt sein, wie diese mathematischen Operationen zu implementieren sind.

## Exercise 3

```cpp
template <typename T>
std::size_t Matrix<T>::num_rows() const

template <typename T>
std::size_t Matrix<T>::num_cols() const
```

Diese Funktionen sollten ja easy machbar sein für euch ;)
