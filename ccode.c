/*
  * reduce matrix A to upper triangular form
  */
void eliminate(double **A, int N)
{
   int i, j, k;
   for (k=0; k < N; k++) {  
     for (j=k+1; j<N; j++) {
                            
       A[k][j] = A[k][j] / A[k][k];
     }
                                   
     A[k][k] = 1.0;
     for (i=k+1; i<N; i++) {       
       for (j=k+1; j<N; j++) {     
         A[i][j] = A[i][j] - A[i][k] * A[k][j];
       }
       A[i][k] = 0.0;
     }
   }                               
}                                  
