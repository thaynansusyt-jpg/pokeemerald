# Sinnoh 0.9.2 — verificações realizadas

Emulador nativo: mGBA 0.10.2. Compilador: ARM GCC 13.2.1 / Newlib. ROM de 32 MiB. Última compilação pública: 8 de outubro de 2026.

## Resultado

- New Game real: seletor de temporada, regras, Rowan, escolha de Dawn, nome, Piplup de nível 5 e início em Twinleaf. Unova permanece indisponível.
- Movimento real: corrida com B, corrida automática e B para andar; telhado de Twinleaf bloqueia o avatar.
- Sprites: os 432 quadros compilados dos NPCs importados correspondem aos PNGs originais.
- Treinador comum: vê o jogador, aproxima-se, inicia a batalha, registra a vitória e recarrega uma carga do Prisma.
- Barry: seis batalhas por interação real, nas rotas/cidades previstas, com o inicial de vantagem evoluído e sem avançar a missão principal. Corrigido um erro em que uma resposta anterior de menu podia fazer o próximo encontro pular a batalha. A sequência de seis encontros passou após a correção.
- Atividades: Cheryl/Soothe Bell, pesquisa de Starly/Quick Balls, pescador/Old Rod e música/Dusk Balls concedem o prêmio uma vez; Riley preserva o ovo com equipe cheia e entrega um ovo de Riolu quando há espaço.
- Coleta no chão: Potion recebida, flag gravada e objeto removido.
- Youngster da Rota 201: desligado não altera equipe/mochila; Anti-Grinding ligado completa 999 Rare Candy e seis IVs de 31, preserva o nível e permite repor doces usados.
- Diário: mapa, detalhes, destinos iniciais/finais, lendários e conclusão; entrada/saída pelos botões reais sem mudar a história.
- Configurações: cancelar descarta, Salvar confirma; a missão em curso é preservada.
- DexNav All: espécie local ainda não vista aparece e pode ser registrada sem adulterar o registro de espécies vistas.
- Easy Catch: uma Poké Ball comum captura Dialga de nível 70 com HP cheio, sem gastar o Prisma.
- Prisma: condições de Mesprit/Azelf/Uxie, consumo de carga, isolamento de Hoenn e exclusão de Easy Catch; arremesso real exibe a mensagem de bônus, conclui a captura e consome uma carga. Corrigido avanço ausente da instrução nativa, que antes podia travar o arremesso.
- Campanha: batalhas e eventos até Cynthia, oito insígnias, coletor C/A/B, crise da Galáctica, Mundo Distorcido e restauração. Flag de campeão de Hoenn preservada.
- Capturas reais no pós-jogo: Dialga, Palkia, Giratina, Arceus, Uxie, Mesprit, Azelf, Regigigas, Heatran e Cresselia.
- Carregamento dos 214 mapas de Sinnoh no emulador, com layouts correspondentes aos cabeçalhos e sem reiniciar entre mapas.
- Save de Sinnoh: salvar, reiniciar e Continue conserva temporada e missão.
- Hoenn: save antigo conserva equipe, nome, regras, missão e insígnias; cena de Peeko/ladrão; diário original; New Game de Hoenn após save de Sinnoh conserva Brendan/May. As alterações nos mapas se limitam a Sinnoh.
- Edição pública: sem símbolo da chave de administrador; R + START não abre o debug.

## Alcance dos testes

As verificações de campanha usam deslocamentos controlados e equipe forte, mas executam os scripts e as batalhas do jogo. As capturas usam as ações reais de arremesso. Isso não constitui uma jogatina completa sem assistência e não certifica balanceamento, todos os caminhos a pé, toda animação ou qualidade do áudio. O ruído intermitente relatado pelo jogador permanece sem diagnóstico confirmado.

Interiores tardios são adaptados e alguns usam guias de transporte. Parte dos diálogos compartilha modelos de profissão e de reação ao desfecho. Unova não foi implementada nesta atualização.

## Reproduzir

Os testes ficam em tools/qa_071. Compile emulator.c contra libmgba, gere function_fixture.bin com o compilador ARM e exporte os símbolos do ELF para .qa071/new.symbols. test_season_menu.py e test_sinnoh_new_game.py geram estados novos da mesma compilação; execute-os antes dos demais testes. Evite estados de outra ROM.

Suites principais: test_sinnoh_092.py, test_sinnoh_092_captures.py, test_sinnoh_092_world.py, test_sinnoh_092_maps.py, test_sinnoh_campaign.py, test_sinnoh_091.py, test_sinnoh_regressions.py e test_sinnoh_admin.py.
