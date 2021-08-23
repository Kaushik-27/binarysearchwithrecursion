#include "class.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    CClass objLocal;
    int nToSearch = -100;
    vector<int> arr;
    for (int i = 0; i < 100; i++)
    {
        arr.push_back(i + 99);
    }
    printf("Rnter the val to search : ");
    scanf("%d", &nToSearch);
    nToSearch = objLocal.Execute(nToSearch, arr);
    if (nToSearch == -1)
        printf("Not Found !!!!!!\n");
    else
        printf("Found at pos : %d\n", nToSearch);
}