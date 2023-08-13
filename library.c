#include "library.h"

void splash_screen(const char* titles[], size_t lines) {
    printf("%s", "******************************************************************************\n");
    for(int i = 0; i < lines; ++i) {
        printf("%s", "*");
        int spaces = (80-strlen(titles[i]))/2 - 1;

        for(int j = 0; j < spaces-1; ++j) {
            printf("%s", " ");
        }
        printf("%s", titles[i]);
        for(int j = 0; j < spaces-1; ++j) {
            printf("%s", " ");
        }
        if(strlen(titles[i])%2!=0)
            printf(" ");
        printf("%s", "*\n");
    }
    printf("%s", "******************************************************************************\n");
}
