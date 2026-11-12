# Guitar Legends — Edição Lendária | Etapa 01

Protótipo inicial homebrew para PlayStation 2 usando PS2SDK.

## Objetivo desta etapa
Compilar um primeiro executável `.elf` que mostre uma tela de inicialização.
Este pacote é apenas um esqueleto inicial: ainda não contém jogabilidade, áudio, biblioteca musical, multiplayer ou ISO.

## Decisão de música
O projeto foi planejado para evoluir para uma biblioteca/playlist de músicas pessoais. A ISO não deverá depender de músicas comerciais incorporadas. A leitura dos arquivos no Android, os formatos suportados e o compartilhamento pela rede ainda precisam de testes de viabilidade. Consulte `docs/ARQUITETURA.md`.

## Estrutura
- `src/main.c`: ponto de entrada e tela de inicialização.
- `Makefile`: configuração de compilação pelo PS2SDK.
- `docs/ARQUITETURA.md`: arquitetura e riscos técnicos.
- `docs/DECISOES_DO_PROJETO.md`: decisões confirmadas.
- `docs/PROXIMOS_PASSOS.md`: roteiro de desenvolvimento.

## Compilação
É necessário um ambiente Linux com PS2DEV/PS2SDK configurado e as ferramentas de compilação disponíveis.
No terminal, dentro da pasta do projeto:

```sh
make
```

Se a compilação funcionar, o resultado esperado será `guitar_legends.elf`.
Para limpar os arquivos gerados:

```sh
make clean
```

## Estado atual
A compilação ainda não foi executada. Não tente gerar uma ISO antes de obter e testar um ELF válido.
