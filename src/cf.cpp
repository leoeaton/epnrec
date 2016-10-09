#include <math.h>
#include "cf.h"
#include "constants.h"
#include <assert.h> 
int compute_user_norm(const int **user)
{
    if(!user_norm_ready)
        read_user_norm();
    user_norm = new double[user_size];
    for(int i = 0; i < user_size; i ++)
    {
        user_norm[i] = 0;
        for (int j = 0; j < item_size; j ++)
            user_norm[i] += uimatrix[i][j];
        user_norm[i] = sqrt(user_norm[i]);
    }
    return 0;
}



    

 
double compute_user_length(const int **user)
{

}    
double cosine(const int *user_1, const int *user_2)
{
    assert(user_1 != NULL && user_2 != NULL);
    double result = 0;
    double n1 = 0;
    double n2 = 0;
    for (int i = 0; i < item_size; i ++)
    {
        result += (*user_1) * (*user_2);
        
    }
    return result;
}
