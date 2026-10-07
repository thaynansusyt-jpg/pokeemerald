# Pokémon Hoenn Expansion — 0.7.0 Eclipse Gen7 beta

Projeto de Senhor Laranja. Esta versão reconstrói a expansão sobre pokeemerald-expansion (RHH), mantendo os recursos personalizados da base anterior e removendo a barreira do terceiro ginásio.

## Novidades da 0.7

- Antes do prólogo, configure dificuldade (Fácil/Normal/Difícil), limite (livre/rígido/suave), anti-grinding, EXP da equipe, mochila e estilo de batalha. As escolhas são gravadas ao iniciar o save. Fácil reduz os níveis em dois e os IVs; Difícil aumenta dois níveis e os IVs. Os times de Brendan/May têm parceiros de outras gerações.
- O limite por insígnia acompanha o perfil de dificuldade. Rígido bloqueia EXP e Rare Candy no limite; suave reduz EXP acima dele. Anti-grinding aumenta EXP abaixo do limite e libera um coach nos Centros Pokémon, que fornece dez Rare Candies quando você tem menos de dez. Os doces não têm valor de revenda. EXP da equipe usa o sistema nativo da expansão.
- Sprites ORAS de frente e costas completos para Brendan/May, com paletas separadas; agentes Rocket usam a arte oficial de FireRed/LeafGreen. Policial de Littleroot reposicionado em terreno livre.
- Cenários CFRU para grama, mata, areia, rocha, cavernas, água, interiores e ginásios, nas batalhas selvagens e contra treinadores. Link/Frontier preservam seus fundos próprios.
- 41 NPCs adicionais: pesquisadores, coaches, treinadores secundários e participantes do pós-jogo. Milo na Rota 102 e Lia em Petalburg Woods contam como os insetos sobreviveram aos comboios.
- Pós-jogo Rainbow Rocket: fale com Birch no laboratório após a Liga. A sequência passa por Meteor Falls, Centro Espacial de Mossdeep, salas do primeiro andar do navio abandonado e topo do Sky Pillar. Há três confrontos e cenas com apagão, radar, tremores e resgate. Giovanni usa um Mega Rayquaza Shiny; depois é possível capturar o Rayquaza Shiny livre, com Dragon Ascent. O engenheiro fornece um Mega Ring.
- **70 lendários/míticos até Gen7 + 11 Ultra Beasts** têm expedições próprias cadastradas. Inclui Phione, Cosmog/Cosmoem, Type: Null/Silvally, Meltan e Melmetal. No laboratório, escolha a região e percorra os alvos com “Próximo alvo”. Uma missão ativa por vez; aceitar outra mantém as capturas concluídas.
- Cada expedição pede uma amostra (não consumida), análise no Centro Pokémon correspondente e busca no habitat. Alguns alvos aparecem apenas de noite (18h–6h RTC). O diário MISSÃO mostra o alvo ou a próxima etapa Rainbow Rocket. Captura confirma a conclusão; fugir ou vencer permite repetir.
- Centros de pesquisa: Kanto/Rustboro, Johto/Dewford, Hoenn/Slateport, Sinnoh/Mauville, Unova/Lavaridge, Kalos/Fortree e Alola/Mossdeep. O pesquisador de campo fica próximo de uma entrada do habitat. Consulte `docs/legend_quests.json` para o inventário completo.

## Save e flashcart

**Flash 128 KiB (1024 Kbit) é o formato esperado**, herdado de Emerald e da expansão. Não é tamanho de ROM e não é um erro que exija reduzir para 64 KiB. Use um emulador/cartucho com suporte a Flash 128 KiB e RTC. Em flashcart, a configuração ou patch de save depende do modelo; esta beta não foi testada em hardware físico. Não prometemos compatibilidade com SRAM/Flash 64 KiB.

Faça backup antes de atualizar. Recomenda-se Novo Jogo para escolher as regras; saves 0.6 sem novas variáveis usam dificuldade fácil e limite livre até migração futura. Saves 0.4/0.5 continuam incompatíveis. Não use savestates de uma ROM em outra.

## Conteúdo integrado

- Iniciais: **Rowlet, Cyndaquil e Oshawott**. Os times e as evoluções do rival acompanham a escolha.
- Espécies das gerações 1–7 habilitadas, incluindo formas de Alola. As gerações 8–9 e suas formas foram desativadas. Isso não significa que todos os Pokémon sejam capturáveis nesta beta.
- Encontros revistos em 94 mapas, com 64 tabelas noturnas próprias para rotas e cavernas. Há espécies de outras regiões em terra, água e pesca.
- Dia/noite com RTC real do emulador/cartucho; nenhum ajuste manual de hora é necessário. O relógio da casa apenas sincroniza o horário recebido. Ative RTC no emulador se ele não detectar automaticamente.
- Prólogo em cinco quadros, com cenários do jogo, agentes Rocket, apagão, som e texto em português. A avança; START pula. O Birch explica a migração forçada dos Pokémon e apresenta um Pikachu.
- Operação Eclipse: campanha personalizada desde Littleroot até os oito ginásios, central final de Giovanni em Ever Grande e epílogo após o campeão.
- Novas operações em Lavaridge, Petalburg, Fortree, Mossdeep e Sootopolis. Batalhas próprias, sequências de pulsos, escolhas de prioridade, recompensas e contagem de resgates no final. Errar ou cancelar o decodificador não consome itens.
- Diário **MISSÃO** no menu START, com o próximo objetivo; DexNav após receber a Pokédex.
- Senhor Laranja em Littleroot, com visual de Red, seis Rare Candies e Pikachu de nível 5.
- Sprites de Brendan/May ORAS, enfermeira animada, policiais e agentes Rocket; cenário de batalha de floresta e moldura personalizada.
- Tela inicial de Rayquaza shiny, logo Hoenn Expansion e crédito 2026 — Senhor Laranja.
- 17 remixes de NMM/lequietriot distribuídos por 116 entradas de música de fundo. Fanfarra e efeitos que controlam eventos mantêm suas durações originais.
- Português por padrão, opção PT-BR/EN, correção das larguras de ã/õ e dos buffers do menu de opções.

## Jogar

Abra `Pokemon_Hoenn_Expansion_0.7.0_Gen7_beta.gba` em um emulador GBA com RTC e save Flash 128 KiB (mGBA, por exemplo). **Comece um save novo**: a estrutura de save da expansão mudou; saves das versões 0.4/0.5 não são compatíveis. A cutscene aparece ao selecionar Novo Jogo.

Depois da Pokédex, consulte MISSÃO no menu START. Nas operações, examine a caixa vermelha perto do policial. Conclua a operação local antes do respectivo líder. Há cinco operações após Mauville e uma central final após a oitava insígnia. A progressão original de Surf, Dive, Waterfall e Rayquaza permanece necessária.

## Estado da beta

A campanha tem início, progressão pelos oito ginásios, confronto final e epílogo implementados. Ainda não passou por uma partida inteira do começo ao fim. A tradução cobre a campanha, Birch e elementos dos menus; diálogos, descrições e mensagens herdados ainda podem aparecer em inglês. A opção EN muda a interface localizada, não traduz a campanha personalizada para inglês.

A região mantém grande parte dos mapas de Emerald. Esta entrega não representa uma remasterização completa de todas as cidades, rotas e cavernas. Brendan e May usam arte ORAS no overworld, nas apresentações e nos quatro quadros de lançamento da Pokébola. Há uma campanha Rainbow Rocket adicional e expedições de captura após a Liga.

## Compilar

Base upstream: RHH `6057b187f946094d614e9c34bc12731ea6a5b7bb`.

No Linux, instale `gcc-arm-none-eabi`, `binutils-arm-none-eabi`, `libnewlib-arm-none-eabi`, `libpng-dev`, `python3`, `make`, `gcc` e `g++`. Então:

```sh
python3 tools/validate_hoenn.py
make modern -j4
```

Saída: `pokemon_hoenn_expansion_gen7.gba`. A integração contínua compila a branch `hoenn-expansion-gen7` e disponibiliza a ROM nos artefatos do workflow.

Créditos e termos dos assets estão em `docs/credits/`; os créditos completos da expansão RHH permanecem no repositório upstream.
