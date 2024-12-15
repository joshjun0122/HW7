/*使用fread()函數讀取檔案內容*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 80

int main(void)
{
    FILE* in, * out;
    int Cnt;
    char str[100];
    in = fopen("welcome.txt", "r");
    out = fopen("output.txt", "w");
    while (!feof(in))
    {
        Cnt = fscanf(in, "%s", str);//讀取檔案
        if (Cnt > 0)
            fprintf(out, "%s\n", str);//寫入檔案
    }
    fclose(in);        //關閉檔案
    fclose(out);       //關閉檔案
    system("pause");
    return 0;
}
