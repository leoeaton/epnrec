#include "cf.h"
#include "constants.h"
#include <assert.h> 
double compute_user_norm(const int **user)
{
    
}
double compute_user_norm(const int **user)
{

}    

int 
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
