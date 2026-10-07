# Atualizar para 0.7.2 / Update to 0.7.2

## Português

1. Faça uma cópia de segurança da ROM antiga e do seu arquivo **.sav**.
2. Salve pelo menu do jogo na versão antiga. Feche o emulador.
3. Use a ROM 0.7.2 com o mesmo nome-base do `.sav`, na pasta de saves que seu emulador usa.
4. Configure **Flash 128 KiB (128K)** e habilite **RTC**. O tamanho é esperado para esta base de Emerald; não use Flash 64K.
5. Abra a ROM nova e escolha **Continuar**. Não transporte savestates entre versões.
6. Em **Ajustes / Option**, escolha **PT-BR** ou **EN**. Salve pelo menu do jogo para gravar a escolha.

A migração foi testada com saves de bateria da 0.7.0 e 0.7.1. Preserva nome, equipe, regras, insígnias e a missão ativa. A sequência Devon/Peeko é reparada ao continuar. As capturas de expedições passam a usar marcas separadas das originais: a Pokédex recupera capturas registradas, e marcas antigas que eram livres são reaproveitadas. Marcas antigas compartilhadas com a história não são apagadas, porque não é possível distinguir sua origem. Se uma captura antiga não foi registrada na Pokédex e usava uma marca compartilhada, sua expedição pode precisar ser repetida.

Não é necessário Novo Jogo para essas versões. Saves 0.4/0.5 são incompatíveis; 0.6 não foi validada. Flashcart físico não foi testado. Este pacote é beta: os testes preparados descritos no relatório não equivalem a uma campanha inteira percorrida normalmente.

## English

Back up your old ROM and **.sav** first. Save using the old game's menu, then close the emulator. Place the new ROM alongside the battery save, using matching base filenames and your emulator's save directory. Set **Flash 128 KiB (128K)** and enable **RTC**. Start the new ROM and choose **Continue**. Do not transfer emulator save states between builds.

Select **EN** or **PT-BR** in **Option / Ajustes**, then save in-game. The custom campaign and Rainbow Rocket story, opening, journal and expedition text support both languages.

Battery migration was tested from versions 0.7.0 and 0.7.1. It preserves the player, party, rules, badges and active quest, and repairs the Devon/Peeko progression gate. Expedition capture markers are separated from original story flags. Recorded Pokédex catches and unambiguous old markers restore expedition completion. Shared legacy flags are not cleared because their origin cannot be distinguished. An old catch missing from the Pokédex may require repeating its expedition.

No New Game is required for those versions. Saves from 0.4/0.5 are incompatible; 0.6 has not been validated. Physical flashcarts were not tested. This is a beta with controlled emulator regression tests, not a complete ordinary playthrough.
