/*
  * reduce matrix A to upper triangular form
  */
void eliminate(double **A, int N)
{
   int i; // t0
   int j; // t1
   int k; // t2
   for (k=0; k < N; k++) {  
     
     double inv = 1/A[k][k];
     
     for (j=k+1; j<N; j++) {                            
       A[k][j] = A[k][j] * inv;
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
