#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct person {
    char name[20];
    struct person *anak[2];
};

typedef struct person Person;

int main()
{
    Person keluarga[11] = {
        {
            .name = "Joko"
        },{
            .name = "Kasep"
        },{
            .name = "Hesti"
        },{
            .name = "Ita",
            .anak = {&keluarga[0], &keluarga[1]}
        },{
            .name = "Desi"
        },{
            .name = "Endang",
            .anak = {&keluarga[2], &keluarga[3]}
        },{
            .name = "Budi",
            .anak = {&keluarga[4], &keluarga[5]}
        },{
            .name = "Fitrah"
        },{
            .name = "Gani"
        },{
            .name = "Cintia",
            .anak = {&keluarga[7], &keluarga[8]}
        },{
            .name = "Ari",
            .anak = {&keluarga[6], &keluarga[9]}
        }
    };

    char inputNama[10];
    int hasGrandChildren = 0;
    scanf("%s", inputNama);
    for (int i = 0; i < 11; i++)
    {
        /* code */
        if(strcmp(inputNama, keluarga[i].name) == 0)
        {
            if( keluarga[i].anak[0])
            {
                // printf("punya anak");
                if(keluarga[i].anak[0]->anak[0])
                {
                    printf("%s\n", keluarga[i].anak[0]->anak[0]->name);
                    hasGrandChildren = 1;
                    // printf("punya cucu");
                }
                if(keluarga[i].anak[0]->anak[1])
                {
                    printf("%s\n", keluarga[i].anak[0]->anak[1]->name);
                    hasGrandChildren = 1;
                    // printf("punya cucu");
                }
            }
            if( keluarga[i].anak[1])
            {
                // printf("punya anak");
                if(keluarga[i].anak[1]->anak[0])
                {
                    printf("%s\n", keluarga[i].anak[1]->anak[0]->name);
                    hasGrandChildren = 1;
                    // printf("punya cucu");
                }
                if(keluarga[i].anak[1]->anak[1])
                {
                    printf("%s\n", keluarga[i].anak[1]->anak[1]->name);
                    hasGrandChildren = 1;
                    // printf("punya cucu");
                }
            }
            if(!hasGrandChildren)
            {
                printf("Tidak memiliki cucu.\n");
            }
            // printf("%s\n", keluarga[i].name);
            return 0;
        }
    }

    printf("Nama tidak ditemukan.\n");

    // printf("%s\n", inputNama);
    return 0;
}