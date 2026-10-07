# Regressão da 0.7.1

Após `make modern`, instale `libmgba-dev`, GCC, binutils ARM e Pillow. Execute na raiz:

```sh
python3 tools/qa_071/run.py
```

O teste demora vários minutos. `.qa071/` contém somente estados e imagens de teste; nunca use esses saves como uma partida pessoal. A fixture de bateria foi gravada pela ROM 0.7.0 (commit 16b9139a), com um personagem controlado preso após Roxanne. O teste inicia a ROM atual, importa esse `.sav` e escolhe Continuar. Estados são recriados para cada compilação; não reutilize estados de outra ROM.

Há chamadas nativas, warps e flags preparados em RAM para isolar os eventos. Peeko, Devon, barco e museu passam pelos scripts/batalhas reais. Os cinco puzzles posteriores usam guardas previamente derrotados; não simulam suas batalhas. O teste de expedições prepara 81 encontros, verifica requisitos e resultados; não joga 81 capturas. A varredura de times cria as equipes usadas pelos mapas nos três perfis, sem jogar cada luta. O teste de texto mede linhas personalizadas na fonte do jogo, incluindo substituições conservadoras de nomes.

Esses testes não substituem uma partida completa nem validam flashcart físico.

## Testes bilíngues e batalhas na 0.7.2

`test_language.py` verifica os 614 apontamentos de texto em ambos os idiomas. `test_options.py` percorre o menu inicial, seleção EN, regras, prólogo e Birch; `test_language_save.py` grava baterias de 128 KiB e verifica os dois idiomas após reiniciar e Continuar.

`battle_driver.py` prepara seis Mewtwo de nível 100, navega pelos menus, troca parceiros desmaiados e evita golpes sem PP, desabilitados e algumas imunidades. Isso verifica execução dos eventos, não equilíbrio ou dificuldade. `test_chapter_battles.py` enfrenta os cinco guardas e completa os puzzles; `test_gym_battles.py` prepara requisitos e enfrenta os oito líderes pelo NPC. `test_league_postgame.py` usa a batalha de Giovanni, Elite Four, Wallace, Hall da Fama e sequência Rainbow Rocket. `test_quest_captures.py` percorre pesquisa e 81 capturas reais com amostras e Master Balls fornecidas pela fixture. Ele grava checkpoints próprios; não os distribua como saves pessoais.

Há warps, flags e variáveis preparados para chegar aos eventos. A navegação de todas as rotas e cavernas, a campanha corrida desde New Game, todos os treinadores secundários, balanceamento e flashcart físico continuam fora dessa cobertura.
