# Regressão da 0.7.1

Após `make modern`, instale `libmgba-dev`, GCC, binutils ARM e Pillow. Execute na raiz:

```sh
python3 tools/qa_071/run.py
```

O teste demora vários minutos. `.qa071/` contém somente estados e imagens de teste; nunca use esses saves como uma partida pessoal. A fixture de bateria foi gravada pela ROM 0.7.0 (commit 16b9139a), com um personagem controlado preso após Roxanne. O teste inicia a ROM atual, importa esse `.sav` e escolhe Continuar. Estados são recriados para cada compilação; não reutilize estados de outra ROM.

Há chamadas nativas, warps e flags preparados em RAM para isolar os eventos. Peeko, Devon, barco e museu passam pelos scripts/batalhas reais. Os cinco puzzles posteriores usam guardas previamente derrotados; não simulam suas batalhas. O teste de expedições prepara 81 encontros, verifica requisitos e resultados; não joga 81 capturas. A varredura de times cria as equipes usadas pelos mapas nos três perfis, sem jogar cada luta. O teste de texto mede linhas personalizadas na fonte do jogo, incluindo substituições conservadoras de nomes.

Esses testes não substituem uma partida completa nem validam flashcart físico.
