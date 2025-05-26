const int SENSOR_PIN_VERDE = A0;
const int SENSOR_PIN_VERMELHO=A1;
const int SENSOR_PIN_AMARELO=A2;
const int SENSOR_PIN_AZUL=A3;
const int SENSOR_PIN_ROXO=A4;

const float VCC = 5.0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int leituraAnalogica_VERDE = analogRead(SENSOR_PIN_VERDE);
  int leituraAnalogica_VERMELHO = analogRead(SENSOR_PIN_VERMELHO);
  int leituraAnalogica_AMARELO = analogRead(SENSOR_PIN_AMARELO);
  int leituraAnalogica_AZUL = analogRead(SENSOR_PIN_AZUL);
  int leituraAnalogica_ROXO = analogRead(SENSOR_PIN_ROXO);
  
  
  float tensaoSaida_VERDE = leituraAnalogica_VERDE * (VCC / 1023.0);
  
  float pressao_kPa_VERDE = (tensaoSaida_VERDE / VCC - 0.095) / 0.009;
  if (1 <= pressao_kPa_VERDE <= 2);
    Serial.println("Verde")

  float tensaoSaida_VERMELHO = leituraAnalogica_VERMELHO * (VCC / 1023.0);
  float pressao_kPa_VERMELHO = (tensaoSaida_VERMELHO / VCC - 0.095) / 0.009;
  if (1 <= pressao_kPa_VERMELHO <= 2);
    Serial.println("Vermelho")

  

  float tensaoSaida_AMARELO = leituraAnalogica_AMARELO * (VCC / 1023.0);
  float pressao_kPa_AMARELO = (tensaoSaida_AMARELO / VCC - 0.095) / 0.009;
  if (1 <= pressao_kPa_AMARELO <= 2);
    Serial.println("Amarelo")


  float tensaoSaida_AZUL = leituraAnalogica_AZUL * (VCC / 1023.0);
  float pressao_kPa_AZUL = (tensaoSaida_AZUL / VCC - 0.095) / 0.009;
  if (1 <= pressao_kPa_AZUL <= 2);
    Serial.println("Azul")


  float tensaoSaida_ROXO = leituraAnalogica_ROXO * (VCC / 1023.0);
  float pressao_kPa_ROXO = (tensaoSaida_ROXO / VCC - 0.095) / 0.009;
  if (1 <= pressao_kPa_ROXO <= 2);
    Serial.println("Roxo")

  
  delay(2)

  

}
