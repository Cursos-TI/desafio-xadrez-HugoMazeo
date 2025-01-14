#include <stdio.h>
#include <string.h>

Bispo(int mover)
{
    mover --;
    printf("Cima\n");
    printf("Direta\n");
    if(mover > 0)
    {
        Bispo(mover);
    }
}
Rainha(int mover)
{   
    mover --;
    printf("Esquerda\n");
    if(mover > 0)
    {
        Rainha(mover);
    }
}
Torre(int mover)
{   
    mover --;
    printf("Direita\n");
    if(mover > 0)
    {
        Torre(mover);
    }
}
Cavalo()
{
    int x = 2;
    printf("Cavalo movendo:\n");
    for (int i = 1, j = 2; i > 0 || j > 0; i--, j--)
    {
        if (i > 0) printf("Direita\n");
        if (j > 0) printf("Cima\n");
    }
}
int main() 
{
    int mover_bispo = 5;
    printf("Bispo movendo\n");
    Bispo(mover_bispo);
    int mover_torre = 5;
    printf("Torre movendo\n");
    Torre(mover_torre);
    int mover_rainha = 8;
    printf("Rainha movendo\n");
    Rainha(mover_rainha);
    Cavalo();

    return 0;

}
