# Próximos passos — roteiro atualizado

## Etapa 1 — Preparar e compilar o protótipo
1. Abrir um ambiente Linux na nuvem pelo navegador do Android.
2. Obter/configurar PS2DEV e PS2SDK.
3. Conferir as variáveis PS2DEV e PS2SDK.
4. Compilar o projeto com `make` e confirmar a geração de `guitar_legends.elf`.
5. Testar o ELF em emulador compatível.

## Etapa 2 — Protótipo jogável básico
6. Implementar leitura do controle.
7. Criar o primeiro menu gráfico e navegação.
8. Criar uma faixa de teste original ou autorizada e uma sequência simples de notas.

## Etapa 3 — Validar a música pessoal
9. Investigar como arquivos escolhidos no Android poderão chegar ao jogo.
10. Testar decodificação dos formatos candidatos (MP3, WAV e OGG); não assumir compatibilidade antes dos testes.
11. Definir como compartilhar a mesma faixa entre os dois celulares.

## Etapa 4 — Validar multiplayer
12. Testar comunicação entre duas instâncias do NetherSX2 na mesma rede Wi-Fi.
13. Medir latência e testar sincronização de início e reprodução.
14. Só então implementar salas, anfitrião, dificuldades independentes e placar.

## Etapa 5 — Distribuição
15. Gerar a ISO somente após validar o ELF, os recursos de inicialização e os testes necessários.

## Observação
Este pacote ainda é um esqueleto de código. A compilação não foi executada e não existe jogo/ISO pronto. O primeiro objetivo técnico continua sendo configurar o ambiente e produzir um ELF válido.
