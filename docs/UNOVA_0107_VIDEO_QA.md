# Unova 0.10.7 — Revisão do vídeo (em desenvolvimento)

Vídeo analisado: 2m16s, com introdução, escolha da Hilda, batalhas contra Bianca/Cheren e deslocamento no interior da casa.

## Defeitos visíveis e mudanças

1. Piso cinza repetitivo em NuvemaBedroom/NuvemaHouse: as folhas indexadas `un_indoor` e `un_rooms` tinham padrões temporários nos metatiles 0 e 1. A ferramenta `tools/unova_0107_visual_repair.py` substitui exclusivamente os quatro primeiros tiles usados pelo piso por um padrão próprio de madeira clara, com paletas próprias. Colisão, eventos, warps e outros tiles permanecem inalterados.
2. Hilda vista por trás sem boné visível: atualizados somente os seis quadros traseiros na folha de 18 quadros, sem alterar resolução 32x32 ou a ordem das animações.
3. Bianca/Cheren continuam no quarto após dizerem que vão sair: criada flag persistente `FLAG_UN_FRIENDS_LEFT` e aplicada aos dois object_events. Ao terminar `UN_FirstWon`, o script marca a saída e remove os dois objetos; a flag é reiniciada ao começar outra jornada Unova.
4. Os gráficos novos foram inspecionados por meio de um workflow separado antes da compilação da ROM.

## Validação automatizada

GitHub Actions: https://github.com/thaynansusyt-jpg/pokeemerald/actions/runs/37995953661

- **SUCCESS** compilação completa com ARM GCC e linkagem final.
- **33 verificações novas** de sprites, paletas, metatiles e warps.
- **465 verificações estáticas** anteriores e **104 verificações integradas**.
- Saída: ROM de 33.554.432 bytes; SHA-256: `1451790070196134d70c20e86ba066d01da915f2342f85cd5f84e29e5e472cd9`.
- **Ainda não validado interativamente:** a saída dos personagens e a aparência final no emulador precisam de teste. A compilação não comprova ausência de bugs de gameplay.

## Critérios para a próxima rodada

1. No My Boy!/mGBA: iniciar jogo novo; concluir Bianca e Cheren; confirmar se ambos saem do quarto.
2. Entrar e voltar pelos dois warps da casa e comparar piso novo e sprite Hilda pela frente, costas e laterais.
3. Salvar o jogo, fechar o emulador e carregar pelo menu normal (não somente savestate).
4. Confirmar que a 0.10.6 continua guardada como backup até aprovar a 0.10.7.
5. O vídeo ainda mostrou textos de batalha em inglês e mapas incompletos: esses itens permanecem abertos.

Não redistribuir como versão final até os testes de gameplay. Um único arquivo de ROM por versão de teste.
