#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lexicographic_sort(const char* a, const char* b) {
    int x = strcmp(a,b);
    if(x>0)
        return 1;
    else
        return 0;
}

int distinct(const char *a){
    int x[26];

    for(int i = 0; i<26;i++){
        x[i] = 0;
    }

    for(int i=0;a[i] != '\0'; i++){
        x[a[i] - 'a']++;
    }
    int count = 0;
    for(int i=0;i<26;i++){
        if(x[i] >= 1)
            count++;
    }
    return count;
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    for(int i=0;i<len;i++){
        for(int j=0;j<len-1;j++){
            if(cmp_func(arr[j], arr[j+1])){
             char *temp;
            temp = arr[j];
            arr[j]= arr[j+1];
            arr[j+1]= temp;

            }
        }
    }

}

int main()
{
    int n;
    scanf("%d", &n);

    char** arr;
	arr = (char**)malloc(n * sizeof(char*));

    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }

    string_sort(arr, n, lexicographic_sort);
    printf("\n");
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
}
