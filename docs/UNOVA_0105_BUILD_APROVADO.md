# Unova 0.10.5 — CI e estado de validacao

- Branch: `unova-0.10.5-dev`
- Build aprovado no GitHub Actions: https://github.com/thaynansusyt-jpg/pokeemerald/actions/runs/37990273378
- Artefato (ROM + checksum): `unova-0105-gba-nao-testada-em-jogo`
- SHA-256 da ROM: `afb18289b96223d95ad64759662176dcd23406d5daa46ee7b2c4817f84c52dc2`
- Tamanho: 33.554.432 bytes (32 MiB).
- Verificacoes estaticas: 455 + 104.
- O compilador ARM e o linker geraram uma ROM que foi conferida por SHA-256.
- Um teste limitado de inicializacao via executavel mGBA foi iniciado; **a campanha, saves, regioes e as duas batalhas nao foram validados interativamente**.
- A musica Black/White original e os mapas autenticos de DS nao foram portados integralmente; checkpoint contem material original e mapas em desenvolvimento.
- Nao distribuir como versao final ate ter testes de jogabilidade, principalmente Bianca/Cheren, save e mapa inicial.

Correcoes adicionadas diretamente no GitHub apos a importacao:
1. Remocao de comentario do `midi.cfg` interpretado como regra pelo GNU Make.
2. Ordem de testes de geracao de mapas no workflow de compilacao.
3. Reorganizacao da declaracao das regras de jornada em `src/start_menu.c`, mantendo guard para scripts ARM.

**Importante:** o release `Atualização` contem o ZIP original 0.10.5 DEV. Para novas compilacoes, usar a branch, nao reimportar esse ZIP sobre os reparos novos.

