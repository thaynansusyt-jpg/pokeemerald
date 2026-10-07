# Validação 0.7.0 beta — 7 de outubro de 2026

Compilação modern com GCC ARM 13.2.1 e newlib. ROM de 32 MiB; conteúdo ocupa aproximadamente 23 MiB. SHA-256 da ROM entregue:

`66e7d48a66bcc3bbbab3f9905ee1600da9fec6198259bc1d80385721a2100f90`

## Verificado

- Dois validadores do projeto: campanha anterior, tabelas noturnas, 81 espécies de expedição sem repetição, flags individuais, mapas de pesquisa e 41 novos NPCs em tiles livres, sem colisão com warps.
- Inicialização em mGBA 0.10.2, título, menu em PT-BR, configuração e transição para o prólogo/Birch.
- Fixture de Novo Jogo: dificuldade, limite e opções de EXP/anti-grinding persistem depois da inicialização do save.
- Fixtures nativas: limites iniciais 13/15/17 para Fácil/Normal/Difícil; sem limite retorna 100. Limite rígido corta EXP no teto; suave reduz EXP; anti-grinding aumenta EXP abaixo do teto.
- 81 encontros preparados pelo código nativo: espécies válidas e níveis de acordo com a geração. Este teste verifica criação dos encontros, não 81 capturas jogadas manualmente.
- Controle de conclusão por captura: derrota/fuga não limpa a missão; resultado CAUGHT grava a conclusão. Rayquaza Shiny gerado com nível 80 e Dragon Ascent.
- Policial de Littleroot visto fora da parede. Sprites ORAS/Rocket em tela. Batalha de Lia acionada pelo NPC do mapa; confronto Rainbow Rocket iniciado em fixture de pós-jogo.
- Cenários vistos em batalha de treinador na floresta e no topo do Sky Pillar, inclusive fora do mato. Corrigida a recarga de fundo que fazia reaparecer o cenário liso.
- GitHub Actions compilou o primeiro commit 0.7 com sucesso; a correção final dos cenários foi compilada e conferida localmente.

## Limites da validação

Não houve partida completa do início ao final do pós-jogo nem teste em flashcart físico. Os testes de regressão usam situações controladas em emulador e não substituem uma campanha manual. A tradução herdada é parcial: campanha e opções personalizadas estão em português, mas mensagens de batalha e textos antigos ainda podem estar em inglês.

O pós-jogo usa cutscenes com scripts de campo, diálogos, fades, som e tremores. Não promete animações cinematográficas novas. Expedições têm análise de amostras e ida ao habitat; o inventário completo fica em `legend_quests.json`.

Save requerido: Flash 128 KiB e RTC. Não use savestates de versões anteriores. Recomenda-se Novo Jogo para escolher as regras.
