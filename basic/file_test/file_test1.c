#include <stdlib.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    FILE *fp = fopen("D:\\code\\vscode\\C\\file_test\\test.txt", "w+");
    char str[1000] = {'\0'}, des[1000] = {'\0'};
    if (fp != NULL)
    {
        fgets(str, sizeof(str), stdin);
        fputs(str, fp);
        rewind(fp);
        fgets(des, 100, fp);
        printf("%s", des);
        fclose(fp);
    }
    else
    {
        printf("文件打开错误\n");
    }
    return 0;
}