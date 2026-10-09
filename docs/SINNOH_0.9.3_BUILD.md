# Sinnoh 0.9.3 — branch de recuperação

Branch de testes criada a partir de `hoenn-expansion-0.7.2` (commit `50f4014200cc543ec720b0ea12fbf12d583f953e`).

## Conteúdo dos patches

1. `patches/sinnoh_092/part-*.b64`: partes ordenadas de um XZ contendo patch Git de Sinnoh 0.9.2 (inclui dados binários, scripts e mapas).
2. `patches/sinnoh_093_additional.tar.gz.b64`: pacote com patch de correções 0.9.3 e patch de opções de menu.

Nenhum arquivo da branch 0.7.2 foi sobrescrito. O workflow reconstrói as fontes usando `git apply`, roda testes estáticos e tenta compilar a ROM. Se a build passar, o artefato estará na execução GitHub Actions, com validade temporária.

## Mudanças pretendidas
- Menu Novo Jogo oferece somente Hoenn e Sinnoh.
- DexNav de Sinnoh permite aproximação correndo e timeout de 30 segundos.
- Diário de missões com navegação revisada.
- 24 novas tabelas de encontros terrestres, 5 aquáticas, melhorias em outras 9 áreas.
- Novas opções nativas: velocidade de texto (3 níveis), som (mono/estéreo) e botões (Normal/LR/L=A).
- Textos português e inglês no menu das opções.

## Validação
Patches 0.9.2, 0.9.3 e opções adicionais aplicados **localmente sem conflitos** sobre o pacote-base de 0.7.2. Testes estáticos passaram; compilação de GBA e teste manual em emulador dependem do resultado do GitHub Actions. Não publique como versão final sem fazer teste de campanha.

**Antes de instalar:** faça backup do .sav; evite savestates entre versões.
