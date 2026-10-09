# Pokémon Hoenn Expansion — Unova 0.10.8 (correções dos vídeos legendados)

## Base
Branch anterior: `unova-0.10.7-video-qa`. Nenhuma versão anterior foi sobrescrita.
Fonte da investigação: duas gravações do usuário, 1000738303.mp4 (2m16s) e 1000738309.mp4 (3m10s).

## Bugs confirmados pelos vídeos
- [x] 0.10.7 melhora piso do quarto e Trainer Card e faz Bianca e Cheren desaparecerem corretamente após o prólogo.
- [ ] Texto inicial da Professora Juniper e transições continuam avançando rápido demais; usuário não consegue ler tudo.
- [ ] Na casa de Nuvema, jogador não encontra uma passagem funcional/óbvia para a rua; cenário sem saída clara.
- [ ] Textos iniciais de batalha ainda aparecem em inglês no modo português.
- [ ] Moldura de mensagem da batalha usa bordas vermelhas e não a estética azul do menu de Unova.
- [ ] Os mapas interiores ainda são provisórios, diferentes do Black/White do DS.

## Correções implementadas no código 0.10.8
1. `src/main_menu.c`: transições do prólogo de Unova agora exigem A/B após terminar o texto; demais regiões não foram alteradas. Diálogos PT/EN têm páginas mais curtas.
2. `tools/unova_0108_exits.py`: torna as portas do quarto e da casa de Nuvema 3 tiles de largura e ativa warp numa segunda linha de aproximação. Os índices originais dos warps permanecem preservados; script roda antes da compilação do GitHub Actions.
3. `src/battle_bg.c` e `src/battle_main.c`: troca acentos vermelhos da paleta da caixa de batalha por tons azuis **apenas em Unova**, preservando outras regiões.
4. `src/battle_message.c`: traduz para PT-BR as mensagens de desafio, envio de Pokémon e chamada do parceiro nas batalhas de Unova. Outras mensagens ainda estão em inglês; esta é uma tradução parcial.
5. `tools/qa_unova_0108.py`: checa pares de warps/passagens, solicitação de avanço manual, função da paleta e strings novas.

## Testes necessários em emulador
1. Fazer uma jornada nova em Unova e **não pressionar nenhum botão** quando aparecer um texto da Juniper; confirmar que ele não some sozinho.
2. Depois de escolher Hilda/Hilbert, enfrentar Bianca e Cheren; confirmar textos da batalha em PT-BR e borda azul.
3. Sair do quarto, ir à porta da casa no centro da borda inferior e pisar numa das 3 casas centrais; confirmar transição para Nuvema Town.
4. Entrar na casa novamente e subir ao quarto; testar caminho nos dois sentidos.
5. Salvar no jogo, fechar emulador e reabrir; checar continuidade sem savestate antigo.
6. Confirmar que Hoenn e Sinnoh continuam intactos.

**Estado:** a compilação automatizada deve ser verificada em `Actions`. Sem gameplay completo automatizado, ainda não afirmar que todos os bugs acabaram. Uma ROM por teste: `Unova_0108_Teste.gba`.
