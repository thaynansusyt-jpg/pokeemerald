# Unova 0.10.1 — checkpoint de desenvolvimento

## Implementado na fonte deste checkpoint

- Base recomposta de Unova 0.10 preservada: missões 0–17, NPCs/menus, estações, C-Gear e história até Castelia.
- Extensão inicial: conexão Castelia Street -> Route 4 -> Nimbasa City, Centro Pokémon e NPCs de progresso.
- Estágio 17: após a cena dos dragões, Rota 4 é acessível. Um guarda orienta o jogador e libera a saída norte.
- Estágio 18: conversar com a pesquisadora de Nimbasa conclui a etapa inicial (estágio 19).
- Centro de Nimbasa: local de cura/respawn registrado; wild Pokémon próprios para Route 4.
- Painel MISSÕES de Unova: página informativa e marcador piscante, visual de protótipo.
- Scripts de todos os mapas Unova incluídos no arquivo montador principal, corrigindo símbolos que poderiam ficar ausentes.

## Limitações conhecidas

- Os mapas da Rota 4 e de Nimbasa reutilizam tiles/layouts atuais como **rascunho**, sem interiores e sem estética final de Black/White.
- Ginásio de Elesa, história do parque de diversões, Driftveil, Route 5, Chargestone, Dragonspiral, e Elite Four **não estão implementados neste checkpoint**.
- Os scripts originais de Unova e Sinnoh necessitam compilação ARM e teste no emulador. Não há prova nesta entrega de que todas as batalhas, transições e saves funcionem.
- A base restaurada contém Sinnoh 0.9.2. Os hotfixes posteriores até 0.9.7 existem no repositório, mas não foram integrados neste ZIP.

## Próximos pontos de QA

1. Completar uma compilação `make -f Makefile.termux rom JOBS=2` e validar os erros do toolchain.
2. Criar save novo em Unova e conferir batalha inicial, rota, C-Gear, estações e missão.
3. Conferir campo -> Castelia Street -> Rota 4 -> Nimbasa; entrada/saída do Centro e ressurgimento após derrota.
4. Inspecionar compatibilidade entre saves de Unova 0.10 e 0.10.1.
5. Reaplicar hotfixes Sinnoh 0.9.3 a 0.9.7 em branch independente depois de checagem de conflitos.

## Validação desta entrega

- 320 verificações estáticas iniciais passaram (JSON/links/scripts/layouts/destinos).
- Ferramentas nativas do projeto compilaram no ambiente Linux x86-64 da criação do ZIP; arquivos JSON de mapas novos foram processados com `mapjson`.
- `make generated` iniciou a geração de dados, mas **não terminou** porque o compilador ARM (`arm-none-eabi-cpp`) não está disponível nesse ambiente.
- ROM e testes em emulador: **não executados**.
