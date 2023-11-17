#include <stdio.h>
int modulus(int num ,int mod){
    
    while((num / mod) != 0){
        num = num-mod;
    }
    return num;
    
} 
int main() {
    // Write C code here
    float num =12.5,mod = 5;
    int res;
    res = modulus ((int)num,mod);
    printf("%d",res);

    return 0;
}