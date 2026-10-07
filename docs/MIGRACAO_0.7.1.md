# Atualizar da 0.7.0 para a 0.7.1 sem reiniciar

1. Na ROM antiga, salve pelo menu START → SALVAR. Feche o emulador.
2. Exporte/copie o arquivo de bateria `.sav` e guarde uma cópia fora da pasta do jogo. Não use save state (`.state`, `.ss0` etc.).
3. Abra a ROM 0.7.1 e importe a cópia do `.sav` pela opção de importar save do emulador. Se o emulador associa arquivos pelo nome, use a mesma pasta e o mesmo nome-base: `Pokemon_Hoenn_Expansion_0.7.1_Gen7_beta.gba` e `Pokemon_Hoenn_Expansion_0.7.1_Gen7_beta.sav`.
4. Escolha **CONTINUAR**. Confira nome, equipe e insígnias antes de salvar de novo. Se Continuar não aparece, a importação não foi reconhecida: não selecione Novo Jogo nem sobrescreva seu backup.
5. Configure Flash **128 KiB / 1024 Kbit** e RTC. Flash 64 KiB não é o formato deste jogo.

A correção é automática ao continuar. Preserva a equipe, nome, insígnias, regras e missão ativa; o teste usou um `.sav` controlado gravado na 0.7.0, não o seu arquivo pessoal. Nenhuma estrutura de save, constante de treinador ou variável de progresso foi deslocada. Não é necessário escolher as regras novamente.

## Peeko não apareceu no seu save

Depois de carregar a atualização, saia do túnel e volte a Rustboro. Siga pela avenida para a saída leste até acontecer a cena da mercadoria roubada. Volte pela Rota 116 ao Rusturf Tunnel; vença o ladrão e resgate Peeko. Retorne ao funcionário da Devon em Rustboro e conclua a conversa com Stone no 3º andar. Briney fica então dentro da casa da praia na Rota 104 sul. Seu decodificador A → C continua registrado; não precisa repetir.

Se já resgatou Peeko ou já recebeu o PokéNav, a atualização não repete o roubo. Conclua apenas a etapa que falta. Depois de viajar, Briney acompanha o último desembarque.

## Pós-jogo

Se o engenheiro terminou o resgate e você ficou sem Mega Ring por falta de espaço, fale novamente com ele nas salas do primeiro andar do Abandoned Ship. Libere espaço no bolso de itens-chave; ele entrega o anel sem voltar a história para uma etapa anterior.

## Outras versões

Compatibilidade validada: **0.7.0 → 0.7.1**. Saves 0.4/0.5 não são compatíveis; 0.6 não foi validada. Flashcart físico não foi testado. O ZIP não contém `.sav` para evitar substituir a sua partida.
