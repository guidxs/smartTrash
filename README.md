# Abertura Automática da Tampa da Lixeira com Arduino

Este é um projeto de código Arduino para controlar a abertura da tampa de uma lixeira quando alguém se aproxima dela. O objetivo deste projeto é proporcionar maior facilidade e higiene ao descartar o lixo, eliminando a necessidade de tocar na tampa da lixeira manualmente.

## Link do Tinkercad:
https://www.tinkercad.com/things/eSIkMMZXnha

## Materiais Necessários

- Arduino Uno (ou outro modelo compatível)
- Sensor de proximidade (por exemplo, sensor ultrassônico)
- Servo motor
- Protoboard
- Cabos para conexões

## Configuração do Código

1. Certifique-se de ter instalado a IDE do Arduino em seu computador.
2. Abra o arquivo `smartTrash.c` deste repositório em sua IDE do Arduino.
3. Conecte o Arduino ao computador usando um cabo USB.
4. Selecione a placa correta em "Ferramentas" > "Placa" na IDE do Arduino.
5. Selecione a porta correta em "Ferramentas" > "Porta" na IDE do Arduino.
6. Faça o upload do código para o Arduino.

## Utilização

Após fazer o upload do código para o Arduino e montar corretamente o circuito, a tampa da lixeira será aberta automaticamente quando alguém se aproximar. O sensor de proximidade detectará a presença de uma pessoa e enviará um sinal para o Arduino, que acionará o servo motor para abrir a tampa. Após um período definido, a tampa será fechada automaticamente.

Certifique-se de posicionar o sensor de proximidade adequadamente para que ele possa detectar a aproximação das pessoas de forma eficaz.

## Personalização

Você pode personalizar este projeto de várias maneiras, como:

- Ajustar a distância de detecção do sensor de proximidade.
- Definir o ângulo de abertura da tampa da lixeira.
- Alterar o tempo de espera antes de a tampa ser fechada automaticamente.

Sinta-se à vontade para modificar o código de acordo com suas necessidades e explorar diferentes recursos para aprimorar o projeto.

## Contribuição

Contribuições são bem-vindas! Se você tiver melhorias ou correções para este projeto, sinta-se à vontade para abrir uma "issue" ou enviar um "pull request".

## Aviso

Este projeto é apenas para fins educacionais e recreativos. Certifique-se de tomar as devidas precauções de segurança ao lidar com eletricidade e componentes eletrônicos. Não nos responsabilizamos por quaisquer danos ou lesões causados pelo uso deste projeto.

## Licença

Este projeto está licenciado sob a [Licença MIT](LICENSE).
