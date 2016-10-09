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
    char buff[BUFF_SIZE_LONG];
    string line;
    uimatrix = new int *[user_size];
    for (int i = 0; i < user_size; i ++)
    {
        uimatrix[i] = new int[item_size];
        fgets(buff,BUFF_SIZE_LONG,fin);
        line = buff;
        strtokenizer strtok(line," ");
        if(strtok.count_tokens() != item_size)
        {
            printf("the %d of the %d is not equal to the item_size\n",i);
            return 1;
            
        }
        for(int j = 0; j < item_size; j ++)
        {
            uimatrix[i][j] = atoi(strtok.token(j).c_str());
        }
    }
    fclose(fin);
    return 0;
}
