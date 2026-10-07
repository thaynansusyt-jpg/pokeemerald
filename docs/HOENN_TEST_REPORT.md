# Validação — 0.6.0 Eclipse Gen7 beta

Build GCC modern concluído. ROM utiliza 22.848.152 bytes antes do preenchimento até 32 MiB; EWRAM 226.368 / 262.144 bytes e IWRAM 28.544 / 32.768 bytes. Depuração de overworld, batalha e visualizador desativada na entrega.

Testes executados com mGBA headless e inspeção de capturas:

- Fluxo de Novo Jogo: cinco cenas completas, retorno ao Birch e caixa de diálogo sem os resíduos de framebuffer encontrados durante o desenvolvimento.
- Menu de opções: textos PT-BR e oito linhas, sem sobreposição visível.
- RTC com horários controlados do emulador: 14h → TIME_DAY; 23h → TIME_NIGHT, com paletas distintas em Littleroot. Nenhuma hora foi ajustada pelo relógio do jogo.
- Criação de Rowlet válido no time e inspeção das prévias dos três iniciais (Rowlet, Cyndaquil e Oshawott).
- Menu START com Pokédex, DexNav e MISSÃO; abertura do diário.
- Missão térmica: caminho de erro sem marcar conclusão; sequência B-C-A concluída; escolha Resgate registrada; nova interação sem incrementar novamente a contagem de resgates. A batalha foi marcada como vencida na fixture para isolar o decodificador.
- Validação de fonte: operações acessíveis em cinco cidades; condições nos ginásios; ligação do confronto final e epílogo; 64 tabelas noturnas sem rótulos duplicados; níveis de encontros válidos; ausência da barreira da demonstração.

As fixtures de teste usam alterações de RAM para alcançar os cenários de forma rápida. Elas não fazem parte da ROM e não equivalem a uma partida inteira. Falta testar a campanha completa jogando, inclusive todos os HMs, batalhas, menus secundários, save/load, pós-jogo e outros emuladores. Tradução e remasterização da região ainda são parciais.
