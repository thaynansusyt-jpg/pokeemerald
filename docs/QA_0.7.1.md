# Validação 0.7.1 beta — 7 de outubro de 2026

## Correções e origem

Base 0.7.0: commit 16b9139a17d68e02e6888cebdc567d1e9ca08f3c. Compilação ARM GCC 13.2.1, ROM de 32 MiB, mGBA 0.10.2. SHA-256:

`6c2ef584725d72b7ba58e93e296a7ccbb13bb3b0c97495fe5db6364f226e1141`

A linha da vitória sobre Roxanne mantinha Rustboro em estado 0 e impedia a cena de roubo que deveria preparar Peeko, Devon e Briney. Vitória agora inicia o estado 1. Continuar e entrar em Rustboro recuperam somente saves com primeira insígnia, estado 0 e sem flags das etapas posteriores. Isso não altera o formato do save nem os IDs de treinadores. Correção repetida é inofensiva.

Outras correções: Vesper passa a usar a equipe/sprite Rocket no museu; Devon Parts removidos após entrega; objetivos Peeko e Devon entram no diário; Briney trava a interação antes de retornar por falta de requisito; coach informa falha por bolsa cheia; Mega Ring é entregue antes de avançar a etapa e pode ser recuperado sem repetir a campanha Rainbow Rocket. Textos auxiliares do laboratório foram traduzidos e quebrados em linhas menores.

## Testes concluídos

- Importação de um `.sav` Flash 128 KiB gravado pela ROM 0.7.0. Continuar na ROM final recupera Rustboro e preserva bytes da equipe, nome, dificuldade, limite, expedição ativa e insígnias. Fixture controlada; o save pessoal do usuário não estava disponível.
- Guardas de migração: antes da Roxanne não avança; estados 1–8 e fases com roubo/resgate/PokéNav/porto resolvidos não são reiniciados. Repetir o reparo preserva o estado.
- Cena do roubo, batalha do ladrão e resgate de Peeko, entrega ao funcionário, cena de Stone/PokéNav, diálogo de Briney e viagem real até Dewford.
- Batalha real de Vesper no museu e flags de porto/entrega. Equipes criadas nos três perfis: Fácil 16/16/17; Normal 18/18/19; Difícil 20/20/21.
- Cinco puzzles posteriores: escolhas pelos menus reais, prioridade de resgate, sequências de pulsos e respectivas flags. Cancelamento e erro não contam como conclusão. Guardas marcados como derrotados na fixture: este teste não joga suas batalhas.
- Bolso de itens-chave cheio: engenheiro mantém etapa 3, sem anel. Liberar espaço permite entrega/etapa 4. Recuperação de Mega Ring nas etapas 4/5/6 preserva a etapa atual.
- 81 expedições: preparação nativa de espécies habilitadas e níveis, requisitos de pesquisa/horário, retry após derrota e conclusão por captura. Rayquaza Shiny nível 80 confirmado.
- 1.650 equipes criadas nativamente: 550 treinadores utilizados nos mapas/scripts de Hoenn, em Fácil, Normal e Difícil. Todos os membros tinham espécie habilitada, HP-base válido e nível entre 1 e 100; nenhuma equipe vazia. Este teste não joga todas as batalhas.
- 948 linhas personalizadas medidas com `GetStringWidth` do próprio jogo, com nomes e buffers conservadores: nenhuma acima dos 208 pixels disponíveis. Isso não comprova que todo texto herdado esteja traduzido.
- Dois validadores existentes e novo validador da 0.7.1 verificam missões, expedições, posições, flags e contratos dos eventos corrigidos. NPCs personalizados têm ao menos uma posição adjacente transitável.

## Reproduzir e limites

`python3 tools/validate_hoenn.py`, `python3 tools/validate_hoenn_07.py`, `python3 tools/validate_hoenn_071.py`; após compilar, `python3 tools/qa_071/run.py`. A fixture e o controlador mGBA estão em `tools/qa_071/`.

Não houve campanha completa jogada manualmente nem teste de flashcart físico. Preparação dos encontros não equivale a 81 capturas manuais; criação de times não equivale a jogar cada combate. A tradução herdada é parcial. Não se declara ausência absoluta de bugs. Esta entrega continua uma beta com os bloqueios encontrados corrigidos e regressões reproduzíveis.

Compatibilidade verificada: `.sav` 0.7.0 → 0.7.1; use Continuar. Savestates de outra ROM não são compatíveis. Save esperado: Flash 128 KiB e RTC. Ver `MIGRACAO_0.7.1.md`.
