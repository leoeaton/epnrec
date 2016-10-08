#include "readfile.h"
#include <csdtio>
using namespace std;

int user_item_matrix()
{
    FILE *fin = fopen(user_item_file.c_str(),"r");
    if (!fin)
    {
        printf("cannot open %s to read!\n", user_item_file.c_str());
        return 1;
    }
    uimatrix = new int *[user_size];
    for (int i = 0; i < user_size; i ++)
    {
        uimatrix[i] = new int[item_size];
        
    }
    
}
#endif
