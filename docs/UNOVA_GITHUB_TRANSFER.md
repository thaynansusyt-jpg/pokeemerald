# Pokémon Hoenn Expansion — Unova 0.10.5 (desenvolvimento)

> ATENÇÃO: esta branch foi criada para receber o checkpoint **integral**. O ZIP do código-fonte ainda não foi importado. A base de código que aparece aqui antes da importação é a de Sinnoh 0.9.7, utilizada como ponto de partida para preservar o histórico.

## Transferência do checkpoint pelo próprio GitHub (uma vez)

1. Baixe o arquivo `Pokemon_Hoenn_Expansion_Unova_0.10.5_CHECKPOINT_DEV.zip` disponibilizado na conversa do ChatGPT.
2. Acesse **Releases → Draft a new release** do repositório `thaynansusyt-jpg/pokeemerald`.
3. Crie uma tag exatamente chamada `unova-source-0.10.5`. Se o GitHub pedir uma branch de destino da tag, selecione `unova-0.10.5-dev`.
4. Anexe o ZIP **sem renomear** e publique o release. Faça upload do ZIP como *release asset*: não precisa extrair os 32 mil arquivos no celular.
5. Publique o Release. O workflow **Unova - Importar codigo-fonte** inicia automaticamente ao detectar a tag `unova-source-0.10.5` (não precisa apertar Run workflow).
6. O workflow importará os arquivos para a branch **unova-0.10.5-dev**, sem alterar `master` ou `sinnoh-0.9.7-lake-verity-fix`. Um segundo workflow (Unova - Compilar e validar) iniciará automaticamente após o push.
7. Em **Actions → Unova - Compilar e validar → Artifacts**, baixe a ROM `.gba` se os testes e a compilação forem concluídos com sucesso. Se falhar, o artefato `unova-build-log` fornecerá o erro.

**Importante:** o workflow preserva a pasta `.github/workflows` e não importa os workflows do ZIP. Importa o restante do código-fonte, inclusive recursos binários. Não considera a ROM jogável apenas por ter compilado.

## Estado do projeto

Unova 0.10.5 é um checkpoint em desenvolvimento, não uma versão final. As 559 verificações estáticas locais passaram; não há ainda aprovação em compilação de ponta a ponta e gameplay desta versão. Mapas e temas originais de Black/White não estão reproduzidos integralmente. O pacote inclui cinco temas MIDI próprios, inspirados em Unova.

## Recompilar sem Termux

Depois da importação, os commits seguintes na branch `unova-0.10.5-dev` disparam o workflow `Unova - Compilar e validar` em servidores do GitHub. Os resultados ficam na seção **Actions** e podem ser baixados pelo celular.

Não use save states feitos em versões antigas para avaliar a nova build; crie um save novo. Guarde backup dos saves e das ROMs anteriores.
