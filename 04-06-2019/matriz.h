#ifndef _MATRIZ_H
#define _MATRIZ_H 1

typedef int TYPE;

class Matrix
{
 private:
  int order;
  TYPE *matrix;
  
 public:
  
  Matrix(const int &ord)
    {
      order = ord;
      matrix = new TYPE[ord*ord];
    }
  ~Matrix()
    {
      clear();
    }
  void
    clear()
  {
    delete[] matrix;
  }
  TYPE *operator[](const int &l)const;
  void randomFill();
  void show();
  void add(const Matrix &mx)const;
};

#endif
