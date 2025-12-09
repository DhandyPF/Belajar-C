#include <stdio.h>

int main() {
    int suhu = 32;
    int *pSuhu;
    pSuhu = &suhu;

    printf("Alamat suhu %p \n", &suhu); // Manggil pointer suhu
    printf("Isi pointer pSuhu %p \n", pSuhu); // Manggil Pointer psuhu
    printf("Nilai suhu %d \n", suhu); // Manggil Variabel suhu
    printf("Nilai yang ditunjuk oleh pSuhu %d \n", *pSuhu); // Manggil variabel suhu karena ditunjuk oleh variabel psuhu 
}