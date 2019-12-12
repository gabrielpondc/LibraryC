#include<stdlib.h>
#include<string.h>
#include<stdio.h>
struct bape{
    char Title[31];
    char Author[27];
    int Pages;
    int id;
    };
bape arr[3];


int main() {
    printf("Input book information\n");
    for(int i=0;i<3;i++){
        arr[i].id=i+1;
        printf("Author:");
        scanf("%s",&(arr[i].Author));
        printf("Title:");
        scanf("%s",&(arr[i].Title));
        printf("Page:");
        scanf("%d",&(arr[i].Pages));
        printf("\n");
    }
    printf("Display book infomation\n");
    for(int i=0;i<3;i++){
        printf("book %d\n",arr[i].id);
        printf("Author:%s\n",arr[i].Author);
        printf("Title:%s\n",arr[i].Title);
        printf("Page:%d\n",arr[i].Pages);
        printf("\n");
    }
    system("pause");
}
