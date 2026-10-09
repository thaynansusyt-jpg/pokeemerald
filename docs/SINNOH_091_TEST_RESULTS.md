# Sinnoh 0.9.1 — testes de regressão

24 sheets de NPCs: 216 quadros compilados comparados com as imagens originais, mais conversa/facing real em Sandgem. NPCs não usam pedaços de quadros no chão.

Youngster em Route201: regras desligadas mantêm inventário e IVs; regras ligadas completam 999 Rare Candy, seis IVs=31 com nível preservado; reposição volta a 999.

Menu real START → MISSÃO: mapa, detalhes, rolagem, retorno ao menu e campo. Etapas 1,2,4,7,14,20,21,28 e pós-jogo; estado com todos os lendários capturados. O objetivo acompanha VAR_SI_STAGE sem alterá-la.

Introdução real: textos finais falam de Sinnoh e Twinleaf. New Game Dawn/Piplup nível 5 em Twinleaf; telhado bloqueado; save/reinício/Continue; New Game de Hoenn depois de Sinnoh preserva Brendan/May. Save antigo Hoenn preserva equipe/nome/opções/progresso e Peeko. Diário de Hoenn continua no campo, sem abrir o novo mapa.

Admin: pública não possui chave e R+START não abre debug. Privada rejeita chave errada e abre com 82034D78 71A9.

A cobertura completa da campanha e das dez capturas é da reconstrução 0.9.0 anterior; este ciclo verifica as alterações da 0.9.1. Ainda falta uma jogatina normal completa, e o ruído intermitente de áudio não foi diagnosticado.
