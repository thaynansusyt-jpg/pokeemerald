# Unova 0.10.6 — primeira revisao integrada (fases 1, 2 e 3)

**Build:** https://github.com/thaynansusyt-jpg/pokeemerald/actions/runs/37993024374 — concluido com sucesso em 2026-10-09.

**Arquivo de teste unico:** `Unova_0106_Teste.gba` (33.554.432 bytes, SHA-256: `415401fc1aaa1063de230674179ba566699bdc0e56caf617206907df1df25d43`).

## Mudancas integradas

1. Trainer Card: selecao do retrato de Hilda/Hilbert conforme genero e paleta fria condicional para Unova. Hoenn/Sinnoh preservados.
2. Textos: dez pares de falas originais PT/EN revisados (introducao, iniciais, Juniper, Bianca, Cheren, plaza, orientacao de missao).
3. NPCs: dez habitantes extras com os sprites de Unova ja existentes, sem substituir NPCs da historia.
4. Mapas: sete layouts de inicio receberam ruas, pequenas pracas ou trilhas, preservando edificios, warps e coordenadas de eventos: UnNuvemaTown, UnRoute1, UnAccumulaTown, UnRoute2, UnStriatonCity, UnDreamyard, UnPinwheelOuter.
5. O layout de Wellspring Cave permanece o anterior para evitar introduzir bloqueios ou colisoes sem revisao especifica do tileset.
6. Mapas sao **adaptacoes iniciais para GBA**, nao replicas exatas dos mapas 3D de Black/White. Musicas de Black/White nao foram adicionadas nesta revisao.

## Validacao

- GitHub Actions: compilacao completa OK e arquivos .gba + checksum produzidos.
- 455 checagens estaticas existentes + 104 checagens integradas existentes passaram.
- Log confirmou que o novo gerador atuou nos sete mapas e colocou os dez NPCs.
- Teste limitado do nucleo mGBA carregou a ROM em execucao por seis segundos, sem validar progresso interativo.
- **Ainda nao aprovado em gameplay completo:** verificar intro, batalhas Bianca/Cheren, Trainer Card Hilda/Hilbert, navegar entre Nuvema/Route1/Accumula/Route2/Striaton, Dreamyard, salvamento e carregamento.

## Politica de distribuicao de testes

Distribuir somente um .gba por versao. Manter `0.10.5` guardada como backup no GitHub; emulador pode identificar ROMs como jogos separados pelo nome, portanto remover a antiga somente apos confirmar save/compatibilidade. Nao sobrescrever saves sem backup.
