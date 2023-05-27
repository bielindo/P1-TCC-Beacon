#include <Arduino.h>
#include <BLEDevice.h>
#include <BLEUtils.h>
#include <BLEAdvertising.h>


void setup() {

  Serial.begin(115200);
  // Inicializa o dispositivo BLE
  BLEDevice::init("BeaconTeste");

  // Cria um objeto de anúncio BLE
  BLEAdvertising *pAdvertising = BLEDevice::getAdvertising();
  
  // Define o nome do dispositivo
  pAdvertising->setScanResponse(true);
  
  // Inicia o anúncio BLE
  pAdvertising->start();
}

void loop() {
  Serial.print("SOU O BEACONTESTE");
}