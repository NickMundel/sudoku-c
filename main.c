#include <stdio.h>
#include <unistd.h>
#include <wchar.h>
#include <locale.h>

enum block_side {
    left,
    right, 
    top, 
    bottom
};


struct block {
    unsigned int value: 4;
    unsigned int isNoted: 1;
    enum block_side blockSides[4];
    enum block_side nonetSides[4];
};

int* renderBlock(struct block block_info){
   enum {row=3, col=5};

   char arr[row][col] = {
            {'+','-','-','-','+'},
            {'|',' ',0x00,' ','|'},
            {'+','-','-','-','+'}
    };

    for(int i = 0; i < sizeof(block_info.blockSides); i++)
    {
        if(block_info.blockSides[i] == left) {
            
        }
    }
}


int main() {
    setlocale(LC_ALL, "en_US.UTF-8");
    wchar_t star = 0x1F910;
    wprintf(L"%lc\n", star); // prints ★
    //for (int i = 0; i <= 100; i++) {
    //    printf("Loading: %d%%\r", i);
    //    fflush(stdout);
    //    usleep(50000);
    //}
    printf("\n");
    return 0;
}
