#include <stdio.h>
#include <string.h>
typedef struct point
{
    int x;
    int y;
}point;
int main()
{
    FILE *fp;
    int i;
    point p;
    fp=fopen("file.bin","wb");
    for(i=1;i<=10;i++)
    {
        p.x=i;
        p.y=i+1;
        fwrite(&p, sizeof(point),1,fp);
    }
    rewind(fp);
    fp=fopen("file.bin","rb");
    for(i=1;i<=10;i++)
    {
        fread(&p, sizeof(point),1,fp);
        printf("%d %d\n",p.x,p.y);
    }
    fclose(fp);
}