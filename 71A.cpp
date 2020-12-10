#include<stdio.h>
#include<string.h>
// abc def
 
int main(){
    int i, n, l;
    char str[101], stl[10];
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%s", str);
        l = strlen(str);
        if(l > 10)
            printf("%c%d%c\n", str[0], l-2, str[l-1]);
        else
            printf("%s\n", str);
    }
    return 0;
}
