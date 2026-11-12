#include <debug.h>

/*
 * Guitar Legends — Etapa 01
 * Primeiro teste: inicializar a saída de depuração do PS2SDK
 * e exibir uma tela de boas-vindas.
 *
 * Ainda não há motor gráfico, áudio, controles ou rede nesta etapa.
 */

int main(void)
{
    init_scr();

    scr_printf("\n");
    scr_printf("========================================\n");
    scr_printf("           GUITAR LEGENDS               \n");
    scr_printf("========================================\n");
    scr_printf("\n");
    scr_printf("   PROTOTIPO PLAYSTATION 2 - ETAPA 01   \n");
    scr_printf("\n");
    scr_printf("   Inicializacao concluida.             \n");
    scr_printf("   Proximo passo: leitura do controle.  \n");
    scr_printf("\n");
    scr_printf("========================================\n");

    for (;;)
    {
        /* Mantem o prototipo ativo para observacao no emulador. */
    }

    return 0;
}
