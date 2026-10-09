# Unova 0.10.9 — Diagnóstico do vídeo legendado

## Evidência
Vídeo fornecido: `1000738319.mp4`, 3m53s.

- **01:55–02:55**: fundo de batalha preto na faixa superior, embora as plataformas, Pokémon e caixa de texto azul funcionem.
- **03:00–03:30**: jogador percorre o interior da casa e não encontra saída. O tile da passagem original ficava no limite inferior bloqueado do layout.
- **03:35–03:50**: o menu com rótulo `UNOVA / C-GEAR` funciona, mas ainda é um menu simplificado, não uma recriação completa do C-Gear.
- A introdução de Juniper e as batalhas contra Bianca/Cheren seguem sem os erros graves anteriores. Textos de batalha ainda misturam PT-BR e inglês, parcialmente traduzidos na 0.10.8.

## Correções específicas desta branch
1. `tools/unova_0109_battle_bg.py` gera **dois backgrounds originais** 4bpp, indoor e outdoor. São 512 tiles cada, com cores visíveis em todos os pixels e tilemap 32x32 cobrindo a tela. O `DrawMainBattleBackground` usa-os apenas em batalhas normais de Unova. Outras regiões, fronteira, link e lendários mantêm o comportamento anterior.
2. `tools/unova_0109_exits.py` introduz eventos de passagem ao **pisar** em coordenadas alcançáveis, independentes da classificação de tiles de porta. Quarto (x=9–11,y=12) → andar de baixo; andar de baixo (x=8–10,y=11) → cidade. Adiciona também eventos de subida ao quarto e reentrada na casa.
3. `data/scripts/unova_chapter.inc` contém os scripts `UN_BedroomExit`, `UN_HouseExit`, `UN_ToBedroom` e `UN_EnterHouse` usando comando `warp` e coordenadas internas acessíveis para as chegadas.
4. `tools/qa_unova_0109.py` valida dimensão, paleta, ausência de pixels pretos nos novos gráficos, coordenadas dos novos eventos e labels dos scripts.

## Testes exigidos antes de distribuição pública
- Compilação completa do GitHub Actions deve ser **SUCCESS**.
- Gameplay no mGBA/My Boy!: fundo da batalha Bianca sem faixa preta, com céu/cenário preenchendo a parte superior.
- Ao vencer Bianca e Cheren, descer ao corredor: a saída central deve levar a Nuvema Town sem necessidade de apertar A.
- Voltar pela frente da casa e subir novamente ao quarto; não ficar preso ou entrar em loop.
- Testar save/carregamento e os efeitos em Hoenn/Sinnoh (devem continuar iguais).
- Os testes estáticos não provam que um evento funciona no emulador; a confirmação final é jogando.

Não renomear build antiga como se estivesse consertada. Um único `Unova_0109_Teste.gba` na versão de teste.
