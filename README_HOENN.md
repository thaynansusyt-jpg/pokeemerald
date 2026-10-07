# Pokémon Hoenn Expansion — 0.6.0 Eclipse Gen7 beta

Projeto de Senhor Laranja. Esta versão reconstrói a expansão sobre pokeemerald-expansion (RHH), mantendo os recursos personalizados da base anterior e removendo a barreira do terceiro ginásio.

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

Abra `Pokemon_Hoenn_Expansion_0.6.0_Gen7_beta.gba` em um emulador GBA com RTC e save Flash 128 KiB (mGBA, por exemplo). **Comece um save novo**: a estrutura de save da expansão mudou; saves das versões 0.4/0.5 não são compatíveis. A cutscene aparece ao selecionar Novo Jogo.

Depois da Pokédex, consulte MISSÃO no menu START. Nas operações, examine a caixa vermelha perto do policial. Conclua a operação local antes do respectivo líder. Há cinco operações após Mauville e uma central final após a oitava insígnia. A progressão original de Surf, Dive, Waterfall e Rayquaza permanece necessária.

## Estado da beta

A campanha tem início, progressão pelos oito ginásios, confronto final e epílogo implementados. Ainda não passou por uma partida inteira do começo ao fim. A tradução cobre a campanha, Birch e elementos dos menus; diálogos, descrições e mensagens herdados ainda podem aparecer em inglês. A opção EN muda a interface localizada, não traduz a campanha personalizada para inglês.

A região mantém grande parte dos mapas de Emerald. Esta entrega não representa uma remasterização completa de todas as cidades, rotas e cavernas. Os sprites de protagonista alterados nesta etapa são os do overworld; outras telas podem conservar arte original. O conteúdo original de pós-jogo continua disponível, sem uma nova campanha própria.

## Compilar

Base upstream: RHH `6057b187f946094d614e9c34bc12731ea6a5b7bb`.

No Linux, instale `gcc-arm-none-eabi`, `binutils-arm-none-eabi`, `libnewlib-arm-none-eabi`, `libpng-dev`, `python3`, `make`, `gcc` e `g++`. Então:

```sh
python3 tools/validate_hoenn.py
make modern -j4
```

Saída: `pokemon_hoenn_expansion_gen7.gba`. A integração contínua compila a branch `hoenn-expansion-gen7` e disponibiliza a ROM nos artefatos do workflow.

Créditos e termos dos assets estão em `docs/credits/`; os créditos completos da expansão RHH permanecem no repositório upstream.
