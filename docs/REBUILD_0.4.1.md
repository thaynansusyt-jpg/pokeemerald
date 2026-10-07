# Hoenn Expansion 0.4.1 — Reconstrução

Reconstruída a partir da branch hoenn-expansion-alpha, commit bde40a7. A campanha até Wattson e os eventos Eclipse da 0.4 permanecem como ponto de partida.

## Implementado nesta versão

- Medição de texto usa a mesma tradução que o desenho, corrigindo alinhamento das opções.
- Buffer das opções ampliado para não truncar controles de cor ou palavras traduzidas.
- Glifos e larguras de ã/õ revisados nas cinco fontes latinas.
- Idioma rotulado LANGUAGE/IDIOMA conforme a seleção.
- Brendan e May ORAS: caminhada, corrida, bicicletas, surf, pesca e outras ações.
- Enfermeira com tabela completa de dez frames, incluindo a reverência.
- Policial de Ryuuji em Littleroot, com slot próprio e diálogo da crise.
- 17 remixes de NMM/lequietriot, Johto/Sinnoh, instrumentos adaptados ao Emerald.
- 116 slots de música de fundo remapeados. Os jingles curtos e efeitos sonoros mantêm sua duração original.
- Reserva de 12 trilhas de BGM, sem aumentar os canais DirectSound do mixer.
- Compilação moderna no GitHub Actions e arquivo de código-fonte junto à ROM.

## Limites desta reconstrução

Esta base é pret/pokeemerald. A migração perdida para pokeemerald-expansion, espécies até Gen 5, DexNav, remasterização ORAS dos mapas e o sistema de dia/noite ainda precisam ser refeitos. Não são recursos presentes nesta ROM.

Use um save novo; não importe save states da 0.5.1, que usa outra base.

## Compilação

`make modern -j4` gera pokemon_hoenn_expansion_modern.gba. Dependências: build-essential, gcc-arm-none-eabi, binutils-arm-none-eabi, libnewlib-arm-none-eabi, libpng-dev.

Consulte docs/credits para autores e termos de uso.
