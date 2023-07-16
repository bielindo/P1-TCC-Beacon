# P1 - Projeto TCC (Sistema de monitoramento e rastreamento de objetos indoor) - Beacon Generator

Este é o primeiro repositórios do projeto de Trabalho de Conclusão de Curso (TCC) sobre localização indoor, intitulado "Beacon Generator". O objetivo deste projeto é criar um dispositivo usando o ESP32 que funcione como um beacon Bluetooth Low Energy (BLE).

## Instalação

1. Clone este repositório para o seu ambiente de desenvolvimento local.

    git clone https://github.com/bielindo/P1-TCC-Beacon.git
   
    cd P1-TCC-Beacon

3. Certifique-se de ter as bibliotecas necessárias instaladas. Para esse projeto, são usadas as bibliotecas BLEDevice e BLEUtils. Você pode instalá-las usando o Library Manager do Arduino IDE ou, se estiver usando a plataforma PlatformIO, as bibliotecas são gerenciadas automaticamente.

4. Certifique - se que o seu dispositivo ESP32 possua um módulo BLE.
   
5. Abra o arquivo beacon_generator.ino usando a Arduino IDE ou a plataforma PlatformIO.

6. Carregue o código no seu dispositivo ESP32.

## Como Usar

O dispositivo Beacon Generator funcionará como um beacon BLE que envia um sinal contendo informações como seu nome, endereço MAC e outras informações relevantes.

Para usar o aplicativo, siga os passos abaixo:

1. Conecte o dispositivo ESP32 com módulo BLE e inicie o programa.

2. O dispositivo Beacon Generator começará a operar como um beacon BLE.

3. Você pode usar um aplicativo de scanner BLE em outro dispositivo (como um smartphone) para verificar a presença do beacon e ver suas informações.

## Configuração

Você pode personalizar as informações do beacon, como nome e outros dados, no arquivo beacon_generator.ino.

## Dependências
  - BLEDevice: Biblioteca para o módulo BLE do ESP32.

  - BLEUtils: Biblioteca com utilitários para o BLE do ESP32.

## Licença
Este projeto está sob a licença MIT. Consulte o arquivo LICENSE para obter mais detalhes.
