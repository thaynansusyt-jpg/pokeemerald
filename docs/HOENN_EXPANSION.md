# Pokémon Hoenn Expansion — 0.4.0 alpha

Uma primeira hack de Pokémon Emerald feita para explorar Hoenn com mais
opções de equipe e menos dependência de trocas. Base: pret/pokeemerald.
Esta versão transforma o começo da campanha em três atos de **Operação Eclipse**,
em português, de Littleroot até a terceira insígnia, em Mauville. Comece um
NOVO JOGO com save separado. A continuação após Wattson ainda não está feita.
A base continua sendo Emerald: mapas, sistemas e muitos gráficos originais
permanecem. Esta atualização acrescenta arte própria e remodela praças e áreas
de apoio; não é uma substituição completa de todos os tilesets/personagens.
Não inclui Pokémon posteriores à terceira geração, Mega Evoluções ou divisão
físico/especial moderna. Alguns nomes e mensagens auxiliares seguem em inglês.
A tela inicial usa a arte de Rayquaza fornecida pelo autor, o logo de Pokémon
do jogo e o título Hoenn Expansion. O crédito de abertura inclui
`(2026 - Senhor Laranja)`, junto dos avisos originais.

## Nova aventura — versão 0.4.0

A Rocket provoca tremores e apagões para ocupar a rede de energia de Hoenn.
A comandante **Vésper** isola uma ilha, tenta tomar o porto e usa Mauville
como uma bateria. Birch, Norman, Laranja, Brawly, Stern e Wattson formam uma
resistência que você ajuda a conectar. As pistas apontam para o vulcão e o
“guardião do céu”, preparando uma continuação.

### Roteiro jogável

1. **Littleroot / Rustboro:** resgate Birch, treine na Rota 103, receba a
   Pokédex, ajude Wally/Norman e resgate o pesquisador na floresta. Vença Roxanne.
2. **Decodificador:** fale com o pesquisador em frente ao ginásio de Rustboro.
   Ele libera MISSAO no menu. Desligue o terminal ao lado dele: **A, C**.
3. **Dewford:** fale com Briney na casa da Rota 104. A ilha recebe você com
   apagão, tremor e uma moradora em pânico. Vá à entrada da Granite Cave.
   Vença o recruta (Zubat 13 / Ekans 14) e desligue o terminal: **B, A**.
4. **Segundo ginásio:** Brawly aceita o desafio depois de desligar o sinal.
   Com a insígnia, Briney libera a viagem a Slateport.
5. **Porto:** entre no museu, sem taxa, e fale com Stern no segundo andar.
   Vésper entra, enfrenta você com Golbat 18 / Kadabra 18 / Electrike 19 e
   recua. Stern registra a chave de Mauville no seu decodificador. Sua equipe
   é recuperada antes e depois dessa batalha.
6. **Mauville:** siga pela Rota 110, encontre o rival e chegue ao apagão da
   cidade. Interaja com o terminal ao sul do Poké Mart, perto da área de apoio.
   Vésper usa Magnemite 22 / Koffing 22 / Raichu 23. Depois, repita **C, B**.
7. **Terceiro ginásio:** desafie Wattson. A terceira insígnia dispara uma
   transmissão, tremor, apagamento da tela e revelação sobre a energia roubada.
   Salve normalmente depois do encerramento.

### Mecânicas e visuais próprios

- **Decodificador:** puzzles de dois pulsos, ordem diferente por cidade,
  cancelamento com B/Sair, erro com reinício e tentativas ilimitadas. Não
  consome itens. O terminal guarda seu estado e não exige repetir a solução.
- **MISSAO:** diário no menu com o próximo objetivo e contador de três sinais.
  Ocupa o lugar do Pokénav no menu após obter o decodificador; mantém oito linhas.
- **Rede restaurada:** cada terminal libera a etapa seguinte da história.
  Brawly e Wattson recusam desafios enquanto suas cidades estiverem sob o sinal.
- **Apoio civil:** voluntárias em Rustboro, Dewford, Slateport e Mauville
  recuperam sua equipe gratuitamente. Os Centros Pokémon continuam funcionando.
- **Cutscenes:** chegada sob apagão à ilha e à cidade, entrada e retirada de
  Vésper no museu, efeitos de tremor e transmissão após o terceiro ginásio.
  As viagens conservam a animação de barco da base.
- **Arte pixel a pixel:** recruta e comandante com nove quadros de campo;
  retratos de batalha; transmissor com antena/painel; moldura azul com detalhes
  dourados; cenário de combate com torres da Eclipse e cenário de floresta.
  Há gráficos originais fora desses conjuntos, incluindo os protagonistas.
- **Praças remodeladas:** mudanças no piso/jardins de Littleroot, Rustboro,
  Dewford, Slateport e Mauville, com áreas de apoio e terminais próprios.
  Casas, prédios e a maior parte da arquitetura da base são preservados.
- **Novos iniciais:** Chikorita, Cyndaquil e Totodile. As linhas evolutivas dos
  times de May/Brendan acompanham a escolha, inclusive na Rota 110.
- **Novos encontros:** Sentret/Pidgey/Pichu na Rota 101; Mareep/Wooper/Hoppip
  na 102; Phanpy/Wooper na 104; Paras/Pineco/Pikachu na floresta;
  Sandshrew/Abra/Dunsparce na 116; Onix e outros na Granite Cave;
  Mareep/Sandshrew/Wooper/Magnemite na 110. Níveis e taxas seguem os slots da base.
- **PT-BR:** história central, viagens, diálogos dos líderes e rival; mensagens
  básicas de ataque, vitória, envio de Pokémon e escolhas de batalha traduzidas.
  A opção de idioma controla menus/mensagens localizadas; a história própria
  permanece em português. Não é uma tradução integral de todos os textos.

### Limite desta versão

As rotas 111, 117 e 118 retornam você ao piso seguro em Mauville (20,16).
A Rota 115 continua fechada. Rota 116 está aberta para exploração e capturas.
O arco original de Devon Goods não participa da progressão. Steven e partes
opcionais da base que não foram reescritas podem manter conteúdo original.
Após o final, explore as áreas abertas, treine e salve. Não há quarto ginásio
nem capítulo seguinte implementado. Saves antigos não são migrados.

### Arte reproduzível

O gerador de imagens recusou a folha solicitada. Os assets entregues foram
desenhados em código, pixel a pixel, nos formatos nativos do GBA, sem amostrar
imagens de terceiros. O código fonte está em
`tools/hoenn_expansion/draw_assets.py`; os arquivos estão em
`graphics/hoenn_expansion/`. Rode o script com Python 3 para reproduzir a arte.
Não há dependência de geração online na compilação.

## Recursos da 0.2.0 mantidos


- Nova tela inicial com Rayquaza preto, Pokémon / Hoenn Expansion e START.
- Crédito `(2026 - Senhor Laranja)` na abertura.
- Pikachu na apresentação do Professor Birch.
- **IDIOMA: EN / PT-BR**, nos ajustes, com alteração imediata. O idioma fica
  no save quando você salva o jogo. Jogos novos começam com PT-BR.
- **PT-BR inicial, parcial**: 75 textos de menus, apresentação do Birch,
  pesquisa e Senhor Laranja. Não é uma tradução completa de Emerald.
- Glifos `ã` e `õ` nas fontes latinas, com largura adequada.
- **Senhor Laranja**, com a skin de Red, em Littleroot Town, ao lado do
  laboratório. A primeira conversa dá **6 Rare Candies**, uma vez por save.
  Abra espaço na mochila e tente novamente se estiver cheia.
- Depois da Pokédex, fale novamente com ele e aceite a batalha opcional:
  um **Pikachu nível 5**. Antes da Pokédex, ele aguarda. Se perder, pode
  tentar de novo; se vencer, passa a incentivar sua jornada. Na interface
  da batalha, o nome aparece como **LARANJA**, pelo limite do campo original.

## Recursos da primeira alpha

- TMs reutilizáveis: ensinar um golpe não consome a TM, inclusive ao substituir
  um dos quatro golpes. Compatibilidade dos golpes continua igual à original.
- Kadabra, Machoke, Graveler e Haunter evoluem ao subir de nível a partir do
  nível 36. As evoluções por troca continuam disponíveis.
- Alternativas com pedras para as oito evoluções de troca com item, na tabela
  abaixo. As rotas de troca com os itens originais continuam disponíveis.
- Novos encontros e ajustes de raridade no início da aventura.
- Missão no laboratório: depois de receber a Pokédex, fale com o assistente
  do Birch. Registre 10 espécies **da Pokédex de Hoenn** como capturadas para
  receber um Exp. Share. Evoluir também aumenta esse registro. A recompensa
  é única e pode ser retirada depois se a bolsa estiver cheia. É o Exp. Share
  original, equipado em um Pokémon, sem experiência global para toda a equipe.

## Evoluções alternativas

Use a pedra na bolsa, como numa evolução normal por pedra.

| Pokémon | Método solo adicional | Evolução |
|---|---|---|
| Poliwhirl | Sun Stone | Politoed |
| Slowpoke | Moon Stone | Slowking |
| Onix | Thunder Stone | Steelix |
| Seadra | Water Stone | Kingdra |
| Scyther | Leaf Stone | Scizor |
| Porygon | Thunder Stone | Porygon2 |
| Clamperl | Water Stone | Huntail |
| Clamperl | Leaf Stone | Gorebyss |

As pedras mantêm seus outros usos. Esta alpha não adiciona locais de captura
para todas as espécies nem novas lojas de pedras; acessibilidade completa da
Pokédex é trabalho futuro.

## Encontros alterados

Os níveis e a frequência geral dos encontros não mudaram. As porcentagens
referem-se aos encontros em terra dentro da área indicada.

| Área | Destaques na alpha |
|---|---|
| Route 101 | Ralts: 5%, nível 3 |
| Route 102 | Seedot: 5%; Ralts: 4% |
| Route 103 | Marill: 5%, nível 3 |
| Route 104 | Oddish: 10%, nível 5 |
| Route 116 | Skitty: 7%; Machop: 4%, nível 7 |
| Petalburg Woods | Slakoth: 15%; Shroomish: 19% |
| Granite Cave 1F | Mawile: 5%, nível 10; Sableye: 5%, nível 6 |

## Baixar pelo celular

1. Abra a aba **Actions** deste repositório.
2. Abra uma execução verde de **Build Hoenn Expansion**.
3. Em **Artifacts**, baixe **Pokemon-Hoenn-Expansion-0.4.0-alpha**.
4. Extraia o ZIP e abra `pokemon_hoenn_expansion.gba` no KL Play ou em outro
   emulador de GBA. O download de artifacts pode exigir login no GitHub.

Se estiver numa branch diferente, selecione a branch `hoenn-expansion-alpha`.
O botão **Run workflow** aparece na interface quando o workflow já está na
branch padrão. Pushes para a branch alpha iniciam o build automaticamente.

## Teste da alpha

Use um jogo novo, com um save separado. Antes de tentar aproveitar um save
de Emerald, faça uma cópia; não garantimos compatibilidade de saves antigos.

- Confirme o crédito, a tela inicial e o Pikachu da apresentação do Birch.
- Em AJUSTES, alterne EN / PT-BR, volte ao menu e salve a preferência no jogo.
- Fale com Senhor Laranja antes da Pokédex; confira 6 doces e nenhum presente duplicado.
- Volte após receber a Pokédex: aceite ou recuse a batalha contra Pikachu nível 5.
- Complete o evento da Pokédex.
- Fale com o assistente antes de 10 capturas, depois de 10 e após retirar o prêmio.
- Com a bolsa cheia, confirme que o prêmio permanece disponível para depois.
- Ensine a mesma TM a dois Pokémon compatíveis, com e sem substituição de golpe.
- Suba Kadabra/Haunter/Graveler/Machoke até 36; confira cancelamento e Everstone.
- Use as pedras nas espécies da tabela; confira consumo apenas após evolução.
- Resgate o pesquisador na floresta; desafie Roxanne e receba a primeira insígnia.
- Desligue os sinais, complete as viagens e os confrontos de Vésper.
- Confira a transmissão após Wattson; salve depois do encerramento.
- Confira a Rota 116 aberta, a Rota 115 fechada e os limites 111/117/118.

Compilar com sucesso valida integração do código, mas não substitui estes
testes no emulador.

## Próximas versões propostas

1. Mais missões de pesquisa e recompensas ao longo de Hoenn.
2. Melhor acesso a Pokémon exclusivos e itens de evolução.
3. Novas equipes para líderes, com dificuldade opcional.
4. Áreas e uma história de pós-jogo ligadas às pesquisas do Birch.

Esses quatro pontos são propostas, ainda não recursos desta alpha.

## Validação desta entrega

Build de produção com `COMPARE=0` e `git diff --check`. No mGBA, cenários
separados verificam terminais (inclusive erro/cancelamento), batalhas do porto
e do gerador, segunda/terceira insígnias, encerramento e diário. As capturas
confirmam os novos sprites, retratos e cenários. Os cenários temporários são
removidos antes do build entregue. Não houve playthrough contínuo completo
nem migração de saves antigos. A viagem animada da Rota 104 até Dewford foi
verificada; o trecho seguinte usa a navegação existente da base.
