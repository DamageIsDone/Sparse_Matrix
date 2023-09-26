#include <stdio.h>
#define nnz 7

int row_index[nnz]={0,2,4,5,7};
int column_index[nnz]={0,1,0,1,2,1,3};
double value[nnz]={-2,-1,1,3,4,5,-1};
double x[4]={1,2,1,2};
double b[4]={0};

int main()
{
    int i,j;
    for(i=0;i<4;i++){
        for(j=row_index[i];j<row_index[i+1];j++){
            b[i]+=x[column_index[j]]*value[j];
        }
    }
    for(i=0;i<4;i++){
        printf("b_%d=%.0f\n",i,b[i]);
    }
    return 0;
}
