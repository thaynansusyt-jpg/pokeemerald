# Pokémon Hoenn Expansion — 0.3.0 alpha

Uma primeira hack de Pokémon Emerald feita para explorar Hoenn com mais
opções de equipe e menos dependência de trocas. Base: pret/pokeemerald.
Esta versão troca o início da campanha pelo capítulo **Operação Eclipse**,
em português, de Littleroot até a primeira insígnia em Rustboro. Os mapas e
os sistemas de Emerald são a base. Não inclui espécies posteriores à terceira
geração, divisão físico/especial moderna ou Mega Evoluções.
Os diálogos centrais do capítulo são escritos diretamente em português;
o seletor EN/PT-BR continua controlando os menus e os textos localizados da
alpha anterior. Textos auxiliares, nomes de golpes, itens e mensagens de batalha
ainda podem aparecer em inglês. Não é uma tradução integral de Emerald.
A tela inicial usa a arte de Rayquaza fornecida pelo autor, o logo de Pokémon
do jogo e o título Hoenn Expansion. O crédito de abertura inclui
`(2026 - Senhor Laranja)`, junto dos avisos originais.

## Capítulo 1 — Operação Eclipse

**Comece um NOVO JOGO.** Saves das versões anteriores não possuem os eventos
novos na sequência correta; guarde uma cópia deles e use um save separado.

A Rocket provoca tremores e apagões com aparelhos que assustam os Pokémon e
sobrecarregam usinas. Enquanto as cidades pedem socorro, ela oferece uma falsa
proteção para controlar Hoenn. Birch investiga os sinais; Norman mantém um
abrigo; Senhor Laranja protege Littleroot. Você encontra provas na floresta e
ajuda Roxanne a formar a resistência em Rustboro.

Roteiro jogável: mudança e notícia na TV → resgate de Birch → treino na Rota
103 → Pokédex → Norman e Wally → patrulha Rocket opcional na Rota 104 →
resgate do pesquisador na floresta → ginásio de Roxanne → transmissão Rocket,
tremor e encerramento do capítulo.

- Patrulha Rocket: Rattata nível 6. Floresta: Rattata 8 e Zubat 9.
- Roxanne só aceita o desafio depois do resgate do pesquisador.
- A insígnia e TM39 mantêm suas funções. A cena final aparece depois de
  receber a TM; se a mochila estiver cheia, abra espaço e volte a Roxanne.
- Após o final, pode salvar, treinar e explorar as áreas abertas.
- Rotas 115 e 116 estão interditadas, inclusive antes da insígnia. Ao entrar,
  o aviso retorna você para a frente do ginásio. O arco Aqua de roubo dos
  Devon Goods permanece desativado. A viagem de Briney não é liberada.
- A Rocket usa provisoriamente os sprites de recruta Magma da base Emerald;
  nome de facção, equipes e diálogos são da Rocket. Uniformes próprios ficam
  para uma próxima atualização.
- Gancho: uma ordem pelo rádio anuncia a fase dois e o “guardião do céu”.
  A continuação não está implementada nesta versão.

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
3. Em **Artifacts**, baixe **Pokemon-Hoenn-Expansion-0.3.0-alpha**.
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
- Confira o tremor e a transmissão final; salve depois do encerramento.
- Entre nas rotas 115/116 e confira o retorno seguro para Rustboro.

Compilar com sucesso valida integração do código, mas não substitui estes
testes no emulador.

## Próximas versões propostas

1. Mais missões de pesquisa e recompensas ao longo de Hoenn.
2. Melhor acesso a Pokémon exclusivos e itens de evolução.
3. Novas equipes para líderes, com dificuldade opcional.
4. Áreas e uma história de pós-jogo ligadas às pesquisas do Birch.

Esses quatro pontos são propostas, ainda não recursos desta alpha.

## Validação desta entrega

A ROM foi compilada e executada no mGBA. Foram conferidos o crédito, a nova
abertura, a entrada no menu, o seletor EN / PT-BR e o Pikachu da apresentação.
Um cenário de teste em Littleroot confirmou: 6 Rare Candies sem duplicação,
prêmio pendente com mochila cheia e retirada depois de liberar espaço,
espera antes da Pokédex e início da batalha com Pikachu nível 5 após a Pokédex.
Na 0.3.0, cenários separados no mGBA confirmaram o resgate com batalha,
`FLAG_HE_ECLIPSE_PROOF` e estado 1 da floresta; recusa de Roxanne sem as
provas; vitória contra Roxanne, concessão da insígnia/TM e encerramento;
cena final única e retorno da Rota 116 para (27,20) em Rustboro.
Os cenários temporários não fazem parte da ROM entregue. Não houve um
playthrough contínuo inteiro desde a mudança nem teste de migração de saves.
A Rota 115 usa o mesmo bloqueio, com verificação da ligação no script.
