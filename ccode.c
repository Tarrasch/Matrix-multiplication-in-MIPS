/*
  * reduce matrix A to upper triangular form
  */
void eliminate(double **A, int N)
{
   int i, j, k;
   for (k=0; k < N; k++) {          /* loop over all diagonal (pivot)
                                       elements */
     for (j=k+1; j<N; j++) {        /* for all elements in pivot row
                                       and right of pivot element... */
       A[k][j] = A[k][j] / A[k][k]; /* divide by pivot element */
     }
                                    /* Pivot element is now 1 */
     A[k][k] = 1.0;
     for (i=k+1; i<N; i++) {        /* for all elements below pivot row */
       for (j=k+1; j<N; j++) {        /* and right of pivot column... */
         A[i][j] = A[i][j] - A[i][k] * A[k][j];
       }
       A[i][k] = 0.0;
     }
   }                                /* end pivot loop */
}                                   /* end eliminate */
