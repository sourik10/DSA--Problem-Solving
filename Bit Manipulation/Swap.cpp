//pointer approach
void swap(int *A, int *B){
  *A=*A ^ *B;
  *B=*A ^ *B;
  *A=*A ^ *B;
}

//using reference
void swap(int &A, int &B){
  A=A^B;
  B=A^B;
  A=A^B;
}
