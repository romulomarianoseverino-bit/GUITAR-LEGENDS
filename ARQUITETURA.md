# Arquitetura do Guitar Legends — Edição Lendária

## 1. Plataforma inicial
- Alvo planejado: PlayStation 2 (homebrew).
- SDK: PS2SDK / PS2DEV.
- Primeira saída: executável ELF.
- ISO somente depois de compilar e testar um ELF válido.
- Emulação planejada nos celulares Android usando NetherSX2.

## 2. Biblioteca musical pessoal — decisão do projeto
- A ISO não deve incluir músicas comerciais como conteúdo obrigatório.
- O jogador poderá escolher músicas de arquivos que possui e tem direito de usar.
- A biblioteca será organizada como playlist dentro do jogo ou por uma interface auxiliar compatível.
- A seleção de uma faixa deverá identificar título, duração e formato, quando esses dados estiverem disponíveis.
- Formatos candidatos para a etapa de áudio: MP3, WAV e OGG. A compatibilidade real deverá ser validada no ambiente escolhido antes de ser prometida.
- O jogo não deve depender exclusivamente de músicas do Luan Santana: qualquer repertório compatível poderá ser utilizado.

## 3. Multiplayer local
- Dois celulares Android, cada um executando sua própria instância do jogo no emulador.
- Rede Wi-Fi local, sem exigir servidor público para a partida local.
- Qualquer jogador poderá criar a sala.
- Modos cooperativo e competitivo.
- Os dois jogadores devem ouvir a mesma faixa e manter a reprodução sincronizada.
- Cada jogador poderá escolher sua própria dificuldade.

## 4. Compartilhamento da música
Para uma partida, os dois aparelhos precisam ter acesso ao mesmo conteúdo de áudio. A solução a implementar deverá escolher entre:
1. cada jogador importar o mesmo arquivo; ou
2. o anfitrião compartilhar o arquivo com o outro aparelho pela rede local, com consentimento e validação de integridade.

A sincronização deverá transmitir eventos de controle e tempo de início, e não depender apenas de apertar play manualmente nos dois aparelhos.

## 5. Risco técnico que precisa ser validado
O projeto atual é um protótipo de PS2. Uma ISO de PS2 executada no NetherSX2 não ganha automaticamente acesso simples aos arquivos de música do Android. Também não está garantido que duas instâncias do emulador consigam comunicar-se entre si pela rede local.

Antes de implementar a biblioteca e o multiplayer dentro do jogo, precisamos testar:
- como o jogo receberá ou lerá arquivos escolhidos no Android;
- quais formatos de áudio poderão ser decodificados no alvo;
- se a rede entre duas instâncias do NetherSX2 funciona no cenário real;
- se a latência permite manter áudio e jogabilidade sincronizados.

Se essas limitações impedirem a experiência desejada, será necessário avaliar uma aplicação Android nativa ou uma arquitetura híbrida, em vez de prometer recursos que a ISO não consegue acessar.

## 6. Instrumentos e controles planejados
- Guitarra, baixo, bateria e vocais.
- Controles físicos e virtuais, conforme as entradas reconhecidas pelo emulador.
- Dificuldades independentes por jogador.

## 7. Princípios do projeto
- Não distribuir gravações comerciais sem autorização.
- Não exigir contribuição financeira para participar.
- Priorizar qualidade, acessibilidade e diversão.
- Validar cada etapa em aparelho/emulador antes de avançar.
