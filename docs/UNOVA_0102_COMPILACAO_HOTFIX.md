# Unova 0.10.2 — Correção de compilação (IDs dos eventos de mapas)

## Erro resolvido

O build 0.10.1 podia falhar com `include/constants/map_event_ids.h: error: macro names must be identifiers` porque 135 campos `local_id` de personagens de 39 mapas de Unova eram cadeias numéricas (`"1"`, `"2"`, etc.). O gerador `mapjson` exige nomes de macros como `LOCALID_UN_NIMBASA_CITY_1`.

## Mudanças

- Renomeados 135 `local_id` em 39 `data/maps/Un*/map.json` para identificadores válidos e únicos por mapa.
- Incluído `tools/corrigir_unova_ids.py` (pode rodar novamente; não muda arquivos já corrigidos).
- Expandida `tools/qa_unova_0101.py` para detectar IDs inválidos no futuro.
- Mantidos Makefile e Makefile.termux da 0.10.1.

## Compilar

Dentro da raiz do código (onde há `Makefile`):

```sh
make -f Makefile.termux validate
make -f Makefile.termux rom JOBS=1
```

## Verificações realizadas

- 455 verificações estáticas passaram (não equivalem a compilar a ROM).
- `mapjson event_constants` executou e o `map_event_ids.h` não contém `#define` com nomes numéricos.
- A correção foi executada uma segunda vez e não alterou nada (idempotente).

Não foi efetuada uma compilação completa da ROM neste ambiente, pois o compilador ARM não estava disponível. Outros erros podem aparecer em etapas posteriores.
